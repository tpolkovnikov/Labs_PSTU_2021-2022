#include <iostream>
#include "Class_Lab_1.h"
using namespace std;

void Test::Init(double a_1, double b_1) {
	a = a_1;
	b = b_1;

}

double Test::GetA() {
	return a;
}

double Test::GetB() {
	return b;
}

double Test::hipotenuse() {
	return sqrt(a * a + b * b);
}