#include <iostream>
#include <string>
using namespace std;

class Object {
public:
	Object(void);
public:
	~Object(void);
	virtual void Show() = 0;
};

Object::Object(void) = default;
Object::~Object(void) = default;

class TRIAD : public Object
{
protected:
	int first;
	int second;
	int third;
public:
	TRIAD(void);
public:
	virtual ~TRIAD(void);
	void Show();

	TRIAD(int, int, int);
	TRIAD(const TRIAD&);

	int getFirst() { return first; }
	int getSecond() { return second; }
	int getThird() { return third; }

	void setFirst(int);
	void setSecond(int);
	void setThird(int);

	TRIAD& operator=(const TRIAD&);

	friend istream& operator>>(istream& in, TRIAD& c);
	friend ostream& operator<<(ostream& out, const TRIAD& c);

	void first_1() { first++; }
	void second_1() { second++; }
	void third_1() { third++; }
};
TRIAD::TRIAD(void) {
	first = 0;
	second = 0;
	third = 0;
}
TRIAD::~TRIAD(void) {}

TRIAD::TRIAD(int a, int b, int c) {
	first = a;
	second = b;
	third = c;
}
TRIAD::TRIAD(const TRIAD& c) {
	first = c.first;
	second = c.second;
	third = c.third;
}

void TRIAD::setFirst(int n) {
	first = n;
}
void TRIAD::setSecond(int n) {
	second = n;
}
void TRIAD::setThird(int n) {
	third = n;
}

TRIAD& TRIAD::operator=(const TRIAD& c) {
	if (&c == this) {
		return *this;
	}
	first = c.first;
	second = c.second;
	third = c.third;
	return *this;
}

istream& operator>>(istream& in, TRIAD& c) {
	cout << "\nFirst?"; in >> c.first;
	cout << "\nSecond?"; in >> c.second;
	cout << "\nThird?"; in >> c.third;
	return in;
}

ostream& operator<<(ostream& out, const TRIAD& c) {
	out << "\nFirst : " << c.first;
	out << "\nSecond : " << c.second;
	out << "\nThird : " << c.third;
	out << "\n";
	return out;
}

void TRIAD::Show() {
	cout << "\nFirst:" << first;
	cout << "\nSecond:" << second;
	cout << "\nThird:" << third;
	cout << endl;
}

class DATE : public TRIAD {

protected:

public:
	DATE(void);
public:
	~DATE(void);
	void Show();

	DATE(int, int, int);
	DATE(const DATE&);
	
	int getDay() { return first; }
	int getMonth() { return second; }
	int getYear() { return third; }

	void setDay(int);
	void setMonth(int);
	void setYear(int);

	DATE& operator=(const DATE&);
	friend istream& operator>>(istream& in, DATE& l);
	friend ostream& operator<<(ostream& out, const DATE& l);

	void addDay(int);
	void day_1();
	void month_1();
	void year_1();
};

DATE::DATE(void):TRIAD() {
	first = 0;
	second = 0;
	third = 0;
}
DATE::~DATE(void) {}
DATE::DATE(int a, int b, int c) {
	first = a;
	second = b;
	third = c;
}
DATE::DATE(const DATE& c) {
	first = c.first;
	second = c.second;
	third = c.third;
}

void DATE::setDay(int d) {
	first = d;
}
void DATE::setMonth(int m) {
	second = m;
}
void DATE::setYear(int y) {
	third = y;
}

DATE& DATE::operator=(const DATE& l) {
	if (&l == this) return *this; 
	first = l.first;
	second = l.second;
	third = l.third;
}
istream& operator>>(istream& in, DATE& c) {
	cout << "\nDay?"; in >> c.first;
	cout << "\nMonth?"; in >> c.second;
	cout << "\nYear?"; in >> c.third;
	return in;
}
ostream& operator<<(ostream& out, const DATE& c) {
	out << "\nDay : " << c.first;
	out << "\nMonth : " << c.second;
	out << "\nYear : " << c.third;
	out << "\n";
	return out;
}

void DATE::Show() {
	cout << "\nDay: " << first; 
	cout << "\nMonth: " << second; 
	cout << "\nYear: " << third; 
}
void DATE::addDay(int n) {
	first += n;
	int t = 0;
	while (first > 31) {
		t++;
		first -= 31;
	}
	second += t;
	t = 0;

	while (second > 12) {
		t++;
		second -= 12;
	}
	third += t;
}
void DATE::day_1() {
	first ++;
	int t = 0;
	while (first > 31) {
		t++;
		first -= 31;
	}
	second += t;
	t = 0;
	while (second > 12) {
		t++;
		second -= 12;
	}
	third += t;
}
void DATE::month_1() {
	second++;
	int t = 0;
	while (second > 12) {
		t++;
		second -= 12;
	}
	third += t;
}
void DATE::year_1() {
	third++;
}

class Vector {
public:
	Vector(void);
	Vector(int);
public:
	~Vector(void);
	void Add(Object*);
	friend ostream& operator<<(ostream& out, const Vector&);
private:
	Object** beg; // указатель на первый элемент
	int size;   // размер
	int cur;   // текущий элемент 
};

Vector::Vector(void) {
	beg = nullptr;
	size = 0;
	cur = 0;
}
Vector::~Vector(void) {
	if (beg != 0) delete[] beg;
	beg = 0;
}
Vector::Vector(int n) {
	beg = new Object * [n];
	cur = 0;
	size = n;
}
void Vector::Add(Object* p) {
	if (cur < size) {
		beg[cur] = p;
		cur++;
	}
}
ostream& operator<<(ostream& out, const Vector& v) {
	if (v.size == 0) out << "Empty" << endl;
	Object** p = v.beg;
	for (int i = 0; i < v.cur; i++) {
		(*p)->Show();
		p++;
	}
	return out;
}

int main() 
{
	Vector v(5);
	TRIAD a;
	cin >> a;
	cout << a;
	Object* p = &a;
	v.Add(p);

	DATE b;
	cin >> b;
	cout << b;
	p = &b;
	v.Add(p);

	cout <<"\n\nvector: \n" << v << "\n\n";
	return 0;
}