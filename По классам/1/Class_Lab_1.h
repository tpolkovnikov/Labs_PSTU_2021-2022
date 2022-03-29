#pragma once
#include <iostream>
class Test {
private:
	double a;  // катет a
	double b;  // катет b

public:
	void Init(double, double );
	double GetA();
	double GetB();
	double hipotenuse();
};