#include <iostream>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "Rus");
	int const size = 10;  // ������ �������
	int arr[size];
	// ���������� �������
	srand(unsigned(time(0)));               
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100 + 1;
	}
	// ����� �������
	cout << "��������� ������: ";
	for (int i = 0; i < size; i++) {   
		cout << arr[i] << ' ';
	}
	cout << std::endl;
	// �������� ������ 5-� ���������
	for (int i = 0; i < size; i++) {  
		arr[i] = arr[i + 5];
	}
	// ���������� 3-� ���������
	for (int i = size - 5; i < size - 5 + 3; i++) {  
		arr[i] = rand() % 100 + 1;	
	}
	cout << "�������� ������: ";
	// ����� �������
	for (int i = 0; i < size - 5 + 3; i++) {  
		cout << arr[i] << ' ';
	}
	cout << std::endl;
	return 0;
}