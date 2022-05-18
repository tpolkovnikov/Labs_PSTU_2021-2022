#include <iostream>
using namespace std;

class Test {
private:
	double a;  // катет a
	double b;  // катет b

public:
	void Init(double, double);
	double GetA();
	double GetB();
	double hipotenuse();
};

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
