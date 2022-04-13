#include <iostream>
using namespace std;

class Money {
private:
	long ruble;
	int kopeck;
public:
	// Конструктор с параметрами
	Money(long Ruble, int Kopeck) : ruble(Ruble), kopeck(Kopeck) {}

	// Конструктор без параметров
	Money() : ruble(10), kopeck(50) {}

	// Конструктор копирования
	Money(const Money& e) : ruble(e.ruble), kopeck(e.kopeck){}

	// Деструктор
	~Money() {

	}

	// модификаторы
	void setRuble(long Ruble) {
		ruble = Ruble;
	}
	void setKopeck(int Kopeck) {
		kopeck = Kopeck;
	}

	// селекторы
	long getRuble() {
		return ruble;
	}
	int getKopeck() {
		return kopeck;
	}

	// оператор сравнения ==
	bool operator==(Money& p) {
		if ((ruble * 100 + kopeck) == (p.ruble * 100 + p.kopeck)) {
			return true; }
		else { return false; }
	}

	// оператор сранвнения !=
	bool operator!= (Money& p) {
		if ((ruble * 100 + kopeck) != (p.ruble * 100 + p.kopeck)) {
			return true;
		}
		else { return false; }
	}

	// вычитание копеек (постфиксная)
	Money operator --(int) {
		if (kopeck - 1 == -1) {
			kopeck = 99;
			ruble--;
		}
		else {
			kopeck--;
		}
		Money t(ruble, kopeck);
		return t;
	}
	
	// вычитание копеек (префиксная)
	Money& operator--(){
		Money t(ruble, kopeck);
		if (kopeck - 1 == -1) {
			kopeck == 99;
			ruble--;
		}
		else {
			kopeck--;
		}
		return t;
	}
	
	// оператор присваивания
	Money& operator=(const Money& t)
	{
		if (&t == this) {
			return *this;
		}
		ruble = t.ruble;
		kopeck = t.kopeck;
		return *this;
	}
	
	// перегрузка операторов ввод
	friend istream& operator>>(istream& in, Money& t);
	friend ostream& operator<<(ostream& out, const Money& tmp);
};

istream& operator >> (istream& in, Money& t) {
	cout << "ruble: "; in >> t.ruble;
	cout << "kopeck: "; in >> t.kopeck;
	return in;
}

ostream& operator<<(ostream& out, const Money& t)
{
	return (out << t.ruble << "," << t.kopeck);
}


int main()
{
	setlocale(LC_ALL, "Rus");
	Money A(12,0);
	Money B(34,32);
	cout << "A: " << A << endl;
	cout << "B: " << B << endl << endl;
	cout << "(A-- = A:) " << A-- << endl;
	cout << "(A == B:) " << (A == B) << endl;
	cout << "(A != B:) " << (A != B) << endl;
	return 0;
}
