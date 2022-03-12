#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int NOD(int a, int b) {
	if (a % b == 0) 
		return b;
	if (b % a == 0) 
		return a;
	if (a > b) 
		return NOD(a % b, b);
	return NOD(a, b % a);
}
int NOK(int a, int b) {
	return (a * b) / NOD(a, b);
}
// функция вычитания обчных дробей 
string difference(string a, string b) {
	string first_a;
	string second_a;
	string first_b;
	string second_b;
	int t = 0;
	for (char c : a){
		if (c == '/') {
			t = 1;
			continue;
		}
		if (t != 1) {
			first_a += c;
		}
		if (t == 1) {
			second_a += c;
		}
	}
	t = 0;
	for (char c : b) {
		if (c == '/') {
			t = 1;
			continue;
		}
		if (t != 1) {
			first_b += c;
		}
		if (t == 1) {
			second_b += c;
		}
	}
	int int_first_a; int int_second_a; int int_first_b; int int_second_b;
	int_first_a = stoi(first_a);
	int_second_a = stoi(second_a);
	int_first_b = stoi(first_b);
	int_second_b = stoi(second_b);

	int nok = NOK(int_second_a, int_second_b);

	int_first_a = int_first_a * nok / int_second_a;
	int_second_a = int_second_a * nok;
	int_first_b = int_first_b * nok / int_second_b;
	int_second_b = int_second_b * nok;

	int first_result = int_first_a - int_first_b;
	string result;
	result += to_string(first_result);
	result += "/";
	result += to_string(nok);
	return result;
}
// функция вычитания десятичных дробей
string difference(float a, float b) {
	string result;
	int cout = 0;
	// для того, чтобы не было лишних нулей в конце числа 
	for (char c : to_string(a - b)) { 
		cout += 1;
		if (((int(c) - 48) != 0)  || ((cout == 1) && ((int(c) - 48) == 0))) {
			result += c;
		}
	}
	return result;
}
int main()
{
	setlocale(LC_ALL, "Rus");
	int choice;
	cout << "Выберете для каких дробей вычитание:" << endl << "1) Для десятичных" << endl << "2) Для обычных" << endl;
	cin >> choice;
	float a;
	float b;
	string c;
	string d;
	switch (choice) {
		case 1:	
			cout << "Введите первую дробь: ";
			cin >> a;
			cout << "Введите вторую дробь: ";
			cin >> b;
			cout << difference(a, b);
			break;
		case 2:
			cout << "Введите первую дробь: ";
			cin >> c;
			cout << "Введите вторую дробь: ";
			cin >> d;
			cout << difference(c, d);
			break;
	}
	return 0;
}