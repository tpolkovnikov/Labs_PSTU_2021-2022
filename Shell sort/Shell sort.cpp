#include <iostream>
using namespace std;

// функци€ вывода массива
void print_arr(int *arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl << endl;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	int size; // длинна массива
	cout << "¬ведите длинну массива: " << endl;
	cin >> size;
	int *arr = new int[size];

	// заполнение массива случайными числами до 100
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 101;
	}

	// ¬ывод начального массива
	cout << endl << "Ќачальный массив: " << endl;
	print_arr(arr, size);

	// сортировка
	int step = size / 2;
	while (step > 0) {
		for (int i = step; i < size; i++) {
			int current = arr[i];
			int position = i;
			while (position >= step && arr[position - step] > current) {
				arr[position] = arr[position - step];
				position -=  step;
				arr[position] = current;
			}
		}
		step /= 2;
	}

	//вывод отсортированного массива
	cout << "ќтсортированный массив" << endl;
	print_arr(arr, size);
	delete arr;
	return 0;
}