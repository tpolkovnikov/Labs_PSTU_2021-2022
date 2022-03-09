#include <iostream>
#include <ctime>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "Rus");
	int const size = 10;  // длинна массива
	int arr[size];
	// заполнение массива    
	srand(unsigned(time(0)));               
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100 + 1;
	}
	// вывод массива
	cout << "Начальный массив: ";
	for (int i = 0; i < size; i++) {   
		cout << arr[i] << ' ';
	}
	cout << endl;
	// удаление первых 5-и элементов
	for (int i = 0; i < size; i++) {  
		arr[i] = arr[i + 5];
	}
	// добавление 3-х элементов
	for (int i = size - 5; i < size - 5 + 3; i++) {  
		arr[i] = rand() % 100 + 1;	
	}
	cout << "Конечный массив: ";
	// вывод массива
	for (int i = 0; i < size - 5 + 3; i++) {  
		cout << arr[i] << ' ';
	}
	cout << endl;
	return 0;
}
