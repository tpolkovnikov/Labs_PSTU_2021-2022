#include <iostream>
#include "Class_Lab_1.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	Test testik;
	double a; double b;
	cout << "Введите первый катет: " << endl;
	cin >> a;
	cout << "Введите второй катет: " << endl;
	cin >> b;
	testik.Init(a, b);

	cout << "Гипотенуза: " << testik.hipotenuse();
	return 0;
}
