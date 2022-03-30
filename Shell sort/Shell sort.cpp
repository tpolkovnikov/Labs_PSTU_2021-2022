#include <iostream>
using namespace std;

// ������� ������ �������
void print_arr(int *arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl << endl;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	int size; // ������ �������
	cout << "������� ������ �������: " << endl;
	cin >> size;
	int *arr = new int[size];

	// ���������� ������� ���������� ������� �� 100
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 101;
	}

	// ����� ���������� �������
	cout << endl << "��������� ������: " << endl;
	print_arr(arr, size);

	// ����������
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

	//����� ���������������� �������
	cout << "��������������� ������" << endl;
	print_arr(arr, size);
	delete arr;
	return 0;
}