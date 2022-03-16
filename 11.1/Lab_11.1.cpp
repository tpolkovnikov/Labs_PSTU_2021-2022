#include <iostream>
using namespace std;

// узел
struct Node {
	double data;
	Node* pointer_to_next_node = nullptr; 
};

// список
struct List {
	Node* head_node = nullptr;
	Node* tail_node = nullptr;
};

// добавление элемента в конец списка
void pushBack_2(List& list, const double& data) {    
	Node* new_node = new Node;
	new_node->data = data;
	if (list.head_node == nullptr) {
		list.head_node = new_node;
		list.tail_node = new_node;
	}
	else {
		list.tail_node->pointer_to_next_node = new_node;
		list.tail_node = new_node;
	}
}

// вывод списка 
void print_list(List& list) {
	Node* p = list.head_node;
	while (p != nullptr) {
		cout << p->data << '\t';
		p = p->pointer_to_next_node;
	}
	cout << endl;
}

// удаление элемента по номеру 
Node* delete_el(List& list, int k) {
	Node* p = list.head_node;
	if (k == 0) {
		list.head_node = list.head_node->pointer_to_next_node;
		delete p;
		return list.head_node;
	}
	Node* t = nullptr;
	for (int i = 0; i < (k - 1); i++) {
		p = p->pointer_to_next_node;
		if (p->pointer_to_next_node->pointer_to_next_node == nullptr) {
			t = p;
			break;
		}
	}
	if (p->pointer_to_next_node == nullptr) {
		delete p;
		t->pointer_to_next_node = nullptr;
		return list.head_node;
	}
	Node* r = p->pointer_to_next_node;
	p->pointer_to_next_node = r->pointer_to_next_node;
	delete r;
	return list.head_node;
}


int main()
{
	setlocale(LC_ALL, "Rus");

	// создаём список
	List list_1;
	int size = 10;
	
	// заполняем поле data узлов списка числами от 1 до size
	for (int i = 1; i < size + 1; i++) {
		pushBack_2(list_1, i);
	}
	cout << "Начальный список: " << endl;
	print_list(list_1);
	
	// удаление элементов с чётными номерами
	cout << endl << "Промежуточные результаты: " << endl;
	int temp = 0;
	for (int i = 1; i < size + 1; i++) {
		if (i % 2 == 0) {
			list_1.head_node = delete_el(list_1, i - 1 - temp);
			print_list(list_1);
			temp++;
		}
	}

	// выводим конечный список
	cout << endl << "Конечный список: " << endl;
	print_list(list_1);
	return 0;
}
