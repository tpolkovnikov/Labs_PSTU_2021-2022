#include <iostream>
using namespace std;

// компонент очереди
struct comp {
	char* data;
	comp* next = nullptr;

};

// очередь 
struct Queue {
	comp* rear = nullptr;
	comp* front = nullptr;
};

// добавление элемента 
void push(Queue& queue,char data[]) {
	comp* new_el = new comp;
	new_el->data = data;

	if (queue.front == nullptr) {
		queue.front = new_el;
		queue.rear = new_el;
	}
	else {
		new_el->next = queue.rear;
		queue.rear = new_el;
	}

}

// вывод очереди 
void show_queue(Queue& queue) {
	comp* el = queue.rear;
	while (el->next != nullptr) {
		cout << el->data << " ";
		el = el->next;
	}
	cout << el->data;
	cout << endl;
}

// длинна очереди 
int len_queue(Queue& queue) {
	comp* el = queue.rear;
	int count = 0;
	while (el->next != nullptr) {
		count += 1;
		el = el->next;
	}
	count += 1;
	return count;
}

//поле элемента по его номеру
char* data_el(Queue& queue, int k) {
	comp* el = queue.rear;
	int len = len_queue(queue);
	while (len > k) {
		el = el->next;
		len -= 1;
	}
	char* temp = el->data;
	return temp;
}

// номер элемента по его полю
int number_el_data(Queue& queue, char data[]) {
	comp* el = queue.rear;
	int len = len_queue(queue);
	int count = len;
	while (el->data != data) {
		el = el->next;
		count -= 1;
	}
	return count;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	Queue queue_1;
	Queue queue_2;
	// заполнение очереди
	char s[] = "Three";
	push(queue_1, s);
	char s_1[] = "Rings";
	push(queue_1, s_1);
	char s_2[] = "for";
	push(queue_1, s_2);
	char s_3[] = "the";
	push(queue_1, s_3);
	char s_4[] = "Elven-kings";
	push(queue_1, s_4);
	char s_5[] = "under";
	push(queue_1, s_5);
	char s_6[] = "the";
	push(queue_1, s_6);
	char s_7[] = "sky";
	push(queue_1, s_7);

	// вывод начальной очереди
	cout << "Начальная очередь: " << endl;
	show_queue(queue_1);

	// информционное поле для нового элемента
	char new_data[] = "Temp";

	// добавление нового элемента 
	int number = number_el_data(queue_1, s_1);
	for (int i = 1; i < number+1; i++) {
		push(queue_2, data_el(queue_1, i));
	}
	push(queue_2, new_data);
	for (int i = number + 1; i < len_queue(queue_1) + 1; i++) {
		push(queue_2, data_el(queue_1, i));
	}

	//вывод конечной очереди
	cout << "Конечная очередь: " << endl;
	show_queue(queue_2);
	return 0;
}