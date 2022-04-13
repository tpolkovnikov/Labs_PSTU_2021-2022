#include <iostream>
#include"Class_Exam.h"

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Rus");
	// инициализация объекта и вызов конструктора с параметрами
	Exam test("Polkovnikov Tihon Yurievich", "Physics", 3);

	// вызов конструктора без параметров (конструктор по умолчанию)
	Exam test_1;

	// вызов конструктора-копирования
	Exam test_3 = test_1;
	
	// вывод объекта
	test_3.Print();
	return 0;
}
