#include <iostream>
#include <stack>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	// создаём стек
	stack <double> steck;
	// длинна стека
	int size = 10;
	// заполнение стека
	for (int i = 1; i < size + 1; i++) {
		steck.push(i);
	}
	// создаём второй стек
	stack <double> steck_1;

	// добавляем в новый стек элементы из первого
	if (size % 2 == 0) {
		for (int i = 1; i < size + 1; i++) {
			if (i % 2 == 0) {
				steck_1.push(steck.top());
			}
			steck.pop();
		}
	}
	else {
		for (int i = 1; i < size + 1; i++) {
			if (i % 2 != 0) {
				steck_1.push(steck.top());
			}
			steck.pop();
		}
	}
	// выводим стек 
	cout << "Конечный стек: " << endl;
	while (!steck_1.empty()) {
		cout << steck_1.top();
		steck_1.pop();
	}
	cout << endl << endl;
	return 0;
}
