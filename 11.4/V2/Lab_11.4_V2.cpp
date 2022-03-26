#include <iostream>
#include <queue> 

using namespace std;

/*
вставить элемент перед элементом с выбранным информационным полем 


.pop - delete 



добавлять все элементы в новую очередь пока не дойдём до элемента с нужным полем 
добавить нужное поле
добавить всё остальное 
*/


int main() {
	// создаём очередь 
	queue<char*> myQueue;

	// заполняем очередь 
	char s[] = "Three";
	myQueue.push(s);
	char s_1[] = "Rings";
	myQueue.push(s_1);
	char s_2[] = "for";
	myQueue.push(s_2);
	char s_3[] = "the";
	myQueue.push(s_3);
	char s_4[] = "Elven-kings";
	myQueue.push(s_4);
	char s_5[] = "under";
	myQueue.push(s_5);
	char s_6[] = "the";
	myQueue.push(s_6);
	char s_7[] = "sky";
	myQueue.push(s_7);

	char new_data[] = "Temp";
	queue<char*> myQueue_1;

	while (!myQueue.empty()) {
		if (myQueue.front() == s_2) {
			break;
		}
		myQueue_1.push(myQueue.front());
		myQueue.pop();
	}
	// вставляем новый элемент
	myQueue_1.push(new_data);
	while (!myQueue.empty()) {
		myQueue_1.push(myQueue.front());
		myQueue.pop();
	}
	// вывод
	while (!myQueue_1.empty()) {
		cout << myQueue_1.front() << " ";
		myQueue_1.pop();
	}
	return 0;	
}