#include <iostream>
using namespace std;

void quicksort(int* a, int left, int right)
{
	int mid = a[(left + right) / 2];
	int i = left, j = right, t;
	while (i <= j)
	{
		while (a[i] < mid){
			i += 1;
		}
		while (a[j] > mid){
			j -= 1;
		}
		if (i <= j){
			t = a[i];
			a[i] = a[j];
			a[j] = t;
			i++;
			j--;
		}
	}
	if (i < right){
		quicksort(a, i, right);
	}
	if (left < j){
		quicksort(a, left, j);
	}
}


void print_arr(int arr[], int size) {
	for (int i = 0; i < size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(unsigned(time(0)));
	int size;
	cout << "Введите длину массива: \n";
	cin >> size;

	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100 + 1;
	}
	cout << "Начальный массив: ";
	print_arr(arr, size);

	int i = 0, j = size - 1;
	quicksort(arr, i, j);

	cout << "Конечный массив: ";
	print_arr(arr, size);
	return 0;
}

