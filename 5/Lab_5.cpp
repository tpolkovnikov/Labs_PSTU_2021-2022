#include <iostream>
using namespace std;
//функция проверки строки массива на наличие отрицательного элемента, возвращяет true, если строка имеет отрицательный элемент
bool find_negative_numbers(int arr[3][3], int const rows, int const cols, int selected_row) {
	for (int j = 0; j < cols; j++) {
		if (arr[selected_row][j] < 0) {
			return true;
		}
	}
	return false;
}
// функция вывода двумерного массива
void show2DArray(int* arr, int rows, int cols) {
	for (int i = 0; i < rows * cols; i++) {
		cout << arr[i] << ' ';
		if ((i + 1) % cols == 0) {
			cout << endl;
		}
	}
}
// функция для суммы элементов строки 
int main()
{
	setlocale(LC_ALL, "Rus");
	// размеры массива; выбранная строка для проверки; создание двумерного массива; создание массива для запоминания нужных строк;
	int const cols = 3; int const rows = 3;
	int arr_2[rows][cols] = { {-1,0,3}, {4,-5,6}, {1,2,0} };
	int negative_rows[rows] = { 0 };

	// вывод начального двумерного массива
	cout << "Начальный массив : " << endl;
	show2DArray(*arr_2, rows, cols);
	// нахождение всех строк с отрицательным значением 
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (find_negative_numbers(arr_2, cols, rows, i) == true) {
				negative_rows[i] = 1;
				break;
			}
		}
	}
	// удаление строки (замена всех элементов на нули)
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (negative_rows[i] == 1) {
				arr_2[i][j] = 0;
			}
		}
	}
	// перенос строк
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (negative_rows[i] == 1) {
				int temp = arr_2[rows - 1][j];
				arr_2[rows - 1][j] = arr_2[i][j];
				arr_2[i][j] = temp;
			}
		}
	}
	// вывод конечного массива
	cout << "Конечный массив : " << endl;
	show2DArray(*arr_2, rows, cols);
	return 0;
}
