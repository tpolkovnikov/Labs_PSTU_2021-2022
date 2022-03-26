#include <iostream>
using namespace std;

// компонент стека
struct comp {
	double data;
	struct comp* next = nullptr;
};

//стек
struct Stack {
	struct comp* head = nullptr;
};


// добавление в стек элемента
void add_comp(Stack& stack, const double& data) {
	comp* new_el = new comp;
	new_el->data = data;
	if (stack.head == nullptr) {
		stack.head = new_el;
	}
	else {
		new_el->next = stack.head;
		stack.head = new_el;
	}
}

// вывод стека
void show_stack(Stack& stack) {
	comp* el = stack.head;
	while (el->next != nullptr) {
		cout << el->data << " ";
		el = el->next;
	}
	cout << el->data;
	cout << endl;


}
// длинна стека
int len_stack(Stack& stack) {
	comp* el = stack.head;
	int count = 0;
	while (el->next != nullptr) {
		count += 1;
		el = el->next;
	}
	count += 1;
	return count;
}

// удаление элемента из стека
void delete_el(Stack& stack, int k) {
	comp* el = stack.head;
	int len = len_stack(stack);
	if ((len == k) ) {
		comp* temp = el->next;
		stack.head = temp;
		delete el;
	}
	else {
		while (len != k + 1) {
			len = len - 1;
			el = el->next;
		}
		comp* temp_el = el->next;
		el->next = temp_el->next;
		delete temp_el;
	}
}


int main()
{
	setlocale(LC_ALL, "Rus");
	// создаём стек
	Stack stack_1;
	// размер стека
	int size = 10;
	// заполняем поле data компонентов стека числами от 1 до size
	for (int i = 1; i < size + 1; i++) {
		add_comp(stack_1, i);
	}
	cout << "Начальный стек: " << endl;
	show_stack(stack_1);
	cout << endl;

	cout << "Промежуточный вид стека: " << endl;
	int temp = 0;
	// удаление элементов с чётными номерами
	for (int i = 1; i < size + 1; i++) {
		if (i % 2 == 0) {
			delete_el(stack_1, i - temp);
			temp += 1;
			show_stack(stack_1);
		}
	}
	cout << endl << "Конечный стек: " << endl;
	show_stack(stack_1);

	return 0;
}