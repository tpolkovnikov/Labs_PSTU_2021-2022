#include <iostream>

using namespace std;

class TRIAD {
protected:
	int first;
	int second;
	int third;
public:
	// ������������
	TRIAD(int f, int s, int t)
		: first(f), second(s), third(t) {}
	TRIAD()
		: first(0), second(0), third(0) {}
	TRIAD(TRIAD& p)
		: first(p.first), second(p.second), third(p.third) {}
	~TRIAD() {}

	// ������������
	void setFirst(int f) {
		first = f; }
	void setSecond(int s) {
		second = s; }
	void setThird(int t) {
		third = t; }

	// ���������
	int getFirst() {
		return first;}
	int getSecond() {
		return second;}
	int getThird() {
		return third;}

	// ���������� ��������� ������������ 
	TRIAD& operator= (const TRIAD& p) {
		if (&p == this) return *this;
		first = p.first;
		second = p.second;
		third = p.third;
		return *this;
	}
 
	// ������ ���������� ����� �� 1
	void first_1() {
		first++;}
	void second_1() {
		second++;}
	void third_1() {
		third++;}


	friend istream& operator>>(istream& in, TRIAD& t);
	friend ostream& operator<<(ostream& out, const TRIAD& tmp);
};

istream& operator >> (istream& in, TRIAD& t) {
	cout << "first: "; in >> t.first;
	cout << "second: "; in >> t.second;
	cout << "third: "; in >> t.third;
	return in;
}

ostream& operator<<(ostream& out, const TRIAD& t)
{
	return (out << t.first << "," << t.second << "," << t.third);
}

class DATE: public TRIAD { 
	int year = first;
	int month = second;
	int day = third;
public:
	
	DATE() {}
	DATE(int year, int month, int day) :TRIAD(year, month, day) {};
	~DATE() {}
	
	void data_(int n) {
		third = day + n;
		int t = 0;
		while (third > 31) {
			t++;
			third -= 31;
		}
		second += t;
		t = 0;
		
		while (second > 12) {
			t++;
			second -= 12;
		}
		first += t;
	}

	void year_1() {
		first++;
	}
	void month_1() {
		second++;
	}
	void day_1() {
		third++;
	}
};

int main()
{
	setlocale(LC_ALL, "Rus");
	DATE D(2003,03,05);
	cout << "D (year, month, day): " << D << endl << endl;

	// ���������� ���� �� 45 ����
	D.data_(45);
	cout << "���������� ���� �� 45 ����\n";
	cout << "D: " << D << endl;

	// ���������� ���� ��� �� 1
	cout << "���������� ���� ��� �� 1\n";
	D.year_1();
	cout << "D: " << D << endl;

	// ���������� ���� ����� �� 1
	cout << "���������� ���� ����� �� 1\n";
	D.month_1();
	cout << "D: " << D << endl;

	// ���������� ���� ���� �� 1
	cout << "���������� ���� ���� �� 1\n";
	D.day_1();
	cout << "D: " << D << endl;

	return 0;
}