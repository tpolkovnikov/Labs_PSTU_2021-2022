#include <iostream>
#include "Class_Lab_1.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	Test testik;
	double a; double b;
	cout << "������� ������ �����: " << endl;
	cin >> a;
	cout << "������� ������ �����: " << endl;
	cin >> b;
	testik.Init(a, b);

	cout << "����������: " << testik.hipotenuse();
	return 0;
}