#include <iostream>
using namespace std;

// линейный поиск
int linearSearch(int arr[], int size, int key) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == key) { return i; }
	}
	return -1;
}

// интерпол€ционный поиск
int interpolSearch(int* arr, int size, int key) {
	int left = 0;
	int right = size;
	int mid = 0;
	bool found = false;
	while ((left <= right) && found != true) {
		mid = left + ((key - arr[left]) * (right - left)) / (arr[right] - arr[left]);
		if (arr[mid] < key) {
			left = mid + 1;
		}
		else if (arr[mid] > key) {
			right = mid + 1;
		}
		else found = true;
	}
	if (arr[left] == key) {
		return left;
	}
	else if (arr[right] == key) {
		return right;
	}
	return -1;
}

// вывод массива 
void printArr(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	int key;
	int size;
	cout << "¬ведите длинну массива" << endl;
	cin >> size;

	int* arr = new int[size];

	// заполнение массива
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;
	}

	int command_code = -1;
	while (command_code != 0) {
		cout << endl << "0 Ч выход, 1 Ч линейный поиск, 2 Ч интерпол€ционный поиск" << endl;
		cin >> command_code;
		switch (command_code) {
		case 1: {
			//вывод массива
			cout << "ћассив: " << endl;
			printArr(arr, size);
			cout << "¬ведите ключ: " << endl;
			cin >> key;
			cout << "»ндекс элемента: " << linearSearch(arr, size, key);
			break;
		}
		case 2: {
			// сортировка:
			int step = size / 2;
			while (step > 0) {
				for (int i = step; i < size; i++) {
					int current = arr[i];
					int position = i;
					while (position >= step && arr[position - step] > current) {
						arr[position] = arr[position - step];
						position -= step;
						arr[position] = current;
					}
				}
				step /= 2;
			}
			// вывод массива
			cout << "ћассив: " << endl;
			printArr(arr, size);

			cout << "¬ведите ключ: " << endl;
			cin >> key;
			cout << "»ндекс элемента: " << interpolSearch(arr, size, key);
			break;
		}
		}
	}
	return 0;
}