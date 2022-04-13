#include <iostream>
#include "Class_Lab_1.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	Test testik;
	double a; double b;
	cout << "¬ведите первый катет: " << endl;
	cin >> a;
	cout << "¬ведите второй катет: " << endl;
	cin >> b;
	testik.Init(a, b);

	cout << "√ипотенуза: " << testik.hipotenuse();
	return 0;
}