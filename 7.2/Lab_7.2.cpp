#include<iostream>
#include<cmath>
using namespace std;
int kvadr(int num,int first, ...) {
	int c = 0;
	int* p = &first;
	while (num--) {
		if ((sqrt(*p)) == int(sqrt(*p))) {
			c += 1;
		}
		p++;
	}
	return c;
}
int main() {
	setlocale(LC_ALL, "Rus");
	cout << "�����: 3, 3, 9" << endl;
	cout << "���������� ����, ���������� ������� ����������: ";
	cout << kvadr(3, 3, 9) << endl << endl;
	cout << "�����: 7, 4, 5, 10, 15, 100, 121" << endl;
	cout << "���������� ����, ���������� ������� ����������: ";
	cout << kvadr(7, 4, 5, 10, 15, 100, 121) << endl << endl;
	cout << "�����: 11, 99, 115, 255, 128, 4, 512, 13, 3, 15, 1024" << endl;
	cout << "���������� ����, ���������� ������� ����������: ";
	cout << kvadr(11, 99, 115, 255, 128, 4, 512, 13, 3, 15, 1024) << endl << endl;
	return 0;
}