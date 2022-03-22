#include <iostream>
using namespace std;

// узел
struct Node {
	char* data;
	Node* pointer_to_next_node = nullptr;
	Node* pointer_to_prev_node = nullptr;
};

// список
struct List {
	Node* head_node = nullptr;
	Node* tail_node = nullptr;
};

// добавление элемента в конец списка
void pushBack_2(List& list, char data[]) {    
	Node* new_node = new Node;
	new_node->data = data;
	Node* t;
	if (list.head_node == nullptr) {
		list.head_node = new_node;
		list.tail_node = new_node;
	}
	else {
		t = list.tail_node;
		list.tail_node->pointer_to_next_node = new_node;
		list.tail_node = new_node;
		list.tail_node->pointer_to_prev_node = t;
	}
}

// вывод списка 
void print_list(List& list) {
	Node* p = list.head_node;
	while (p != nullptr) {
		cout << p->data << " ";
		p = p->pointer_to_next_node;
	}
	cout << endl;
}

// добавление элемента после элемента с заданным информационным полем
void add_el_by_data(List& list, char data[], char add_data[]) {
	Node* p = list.head_node;
	/*
	for (int i = 0; i < 8; i++) {
		if (p->data == data) {
			break;
		}
		p = p->pointer_to_next_node;
	}*/
	while (p->data != data) {
		p = p->pointer_to_next_node;
	}
	// p = элементу с заданным полем

	if (p == list.tail_node) {
		Node new_data;
		new_data.pointer_to_prev_node = p;
		new_data.data = add_data;
		new_data.pointer_to_next_node = nullptr;
		p->pointer_to_next_node = &new_data;
	}
	else {
		Node new_node;
		new_node.data = add_data;
		new_node.pointer_to_prev_node = p;
		new_node.pointer_to_next_node = p->pointer_to_next_node;
		p->pointer_to_next_node->pointer_to_prev_node = &new_node;
		p->pointer_to_next_node = &new_node;
	}
}

int main()
{
	setlocale(LC_ALL, "Rus");

	// создаём список
	List list_1;

	// заполняем поле data узлов списка 
	char s[] = "Three";
	pushBack_2(list_1, s);
	char s_1[] = "Rings"; 
	pushBack_2(list_1, s_1);
	char s_2[] = "for";
	pushBack_2(list_1, s_2);
	char s_3[] = "the";
	pushBack_2(list_1, s_3);
	char s_4[] = "Elven-kings";
	pushBack_2(list_1, s_4);
	char s_5[] = "under";
	pushBack_2(list_1, s_5);
	char s_6[] = "the";
	pushBack_2(list_1, s_6);
	char s_7[] = "sky";
	pushBack_2(list_1, s_7);
	
	cout << "Начальный список: " << endl;
	print_list(list_1);
	cout << endl;

	char new_data[] = "Temp";
	cout << endl << "Конечный список: ";
	add_el_by_data(list_1, s_4, new_data);
	cout << endl;
	print_list(list_1);
	return 0;
}