#include <iostream>
#include <algorithm>
using namespace std;

template <class T>
class plenty {
private:
	int size;
	T* data;
public:
	plenty();
	plenty(int, T k = 0);
	plenty(const plenty&);
	~plenty();

	T& operator[](int);
	int operator()();
	plenty<T> operator-(const plenty&);

	// <> - указывают на то, что функция является шаблоном 
	friend ostream& operator<< <>(ostream& out, const plenty&);
	friend istream& operator>> <>(istream& in, plenty&);

	plenty<T> operator+(const T k);
	plenty<T>& operator=(const plenty<T>&);
};
template <class T>
plenty<T>::plenty() = default;

template <class T>
plenty<T>::plenty(int s, T k) {
	size = s;
	data = new T[size];
	for (int i = 0; i < size; i++) {
		data[i] = k;
	}
}

template <class T>
plenty<T>::plenty(const plenty& p) {
	size = p.size;
	data = new T[size];
	for (int i = 0; i < size; i++) {
		data[i] = p.data[i];
	}
}

template <class T>
plenty<T>::~plenty() {
	delete[]data;
	data = nullptr;
}

template <class T>
T&plenty<T>::operator[](int index) {
	if (index < size) return data[index];
	else cout << "\nError! Index>size";
}

template <class T>
int plenty<T>::operator()() {
	return size;
}

template <class T>
plenty<T> plenty<T>::operator-(const plenty& p) {
	plenty<T> temp(size);
	for (int i = 0; i < size; i++) {
		temp.data[i] = this->data[i] - p.data[i];
	}
	return temp;
}

template <class T>
ostream& operator<<(ostream& out, const plenty<T>& a) {
	for (int i = 0; i < a.size; i++) {
		cout << a.data[i] << " ";
	}
	return out;
}

template <class T>
istream& operator>>(istream& in, plenty<T>& a) {
	for (int i = 0; i < a(); i++) {
		in >> a.data[i];
	}
	return in;
}

template <class T>
plenty<T>& plenty<T>::operator=(const plenty<T>& a)
{
	if (this == &a)return *this;
	size = a.size;
	if (data != 0) delete[]data;
	data = new T[size];
	for (int i = 0; i < size; i++)
		data[i] = a.data[i];
	return *this;
}

template <class T>
plenty<T> plenty<T>::operator+(const T k) {
	plenty<T> temp(size, k);
	for (int i = 0; i < size; ++i) {
		temp.data[i] = data[i] + k;
	}
	return temp;
}

class Money {
private:
	long ruble;
	int kopeck;
public:
	// Конструкторы
	Money(long Ruble, int Kopeck) : ruble(Ruble), kopeck(Kopeck) {}
	Money() : ruble(10), kopeck(50) {}
	Money(const Money& e) : ruble(e.ruble), kopeck(e.kopeck) {}
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
			return true;
		}
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
	Money& operator--() {
		Money t(ruble, kopeck);
		if (kopeck - 1 == -1) {
			kopeck = 99;
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

	// оператор добавления константы
	Money operator+(int k) {
		kopeck += k;
		ruble += k;
		while (kopeck >= 100) {
			ruble++;
			kopeck -= 100;
		}
		Money temp(ruble, kopeck);
		return temp;
	}
	Money operator+(Money k) {
		kopeck += k.kopeck;
		ruble += k.ruble;
		while (kopeck >= 100) {
			ruble++;
			kopeck -= 100;
		}
		Money temp(ruble, kopeck);
		return temp;
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

	Money t;
	cin >> t;
	cout <<"Money t: "<< endl << t << endl;
	plenty<Money> A(5, t);
	cout << "plenty<Money> A:" << endl;
	cin >> A;
	cout << "plenty<Money> A:" << endl << A << endl;
	plenty<Money> B(10, t);
	cout << "plenty<Money> B:" << endl;
	B = A;
	cout << B << endl;
	cout << "plenty<Money> A[2]: " << endl;
	cout << A[2] << endl;
	cout << "plenty<Money> A size: " << endl;
	cout << "size=" << A() << endl;
	B = A + t;
	cout << "plenyt<Money> B = plenty<Money> A + Money t = " << endl;
	cout << B << endl;

	return 0;
}