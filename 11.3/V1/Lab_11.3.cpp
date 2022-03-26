#include <iostream>
using namespace std;

// ��������� �����
struct comp {
	double data;
	struct comp* next = nullptr;
};

//����
struct Stack {
	struct comp* head = nullptr;
};


// ���������� � ���� ��������
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

// ����� �����
void show_stack(Stack& stack) {
	comp* el = stack.head;
	while (el->next != nullptr) {
		cout << el->data << " ";
		el = el->next;
	}
	cout << el->data;
	cout << endl;


}
// ������ �����
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

// �������� �������� �� �����
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
	// ������ ����
	Stack stack_1;
	// ������ �����
	int size = 10;
	// ��������� ���� data ����������� ����� ������� �� 1 �� size
	for (int i = 1; i < size + 1; i++) {
		add_comp(stack_1, i);
	}
	cout << "��������� ����: " << endl;
	show_stack(stack_1);
	cout << endl;

	cout << "������������� ��� �����: " << endl;
	int temp = 0;
	// �������� ��������� � ������� ��������
	for (int i = 1; i < size + 1; i++) {
		if (i % 2 == 0) {
			delete_el(stack_1, i - temp);
			temp += 1;
			show_stack(stack_1);
		}
	}
	cout << endl << "�������� ����: " << endl;
	show_stack(stack_1);

	return 0;
}