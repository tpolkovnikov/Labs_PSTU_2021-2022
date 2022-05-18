#include <iostream>
using namespace std;

class Exam {
	string FIO;
	string Subject;
	int Grade;
public:
	// селекторы
	string GetFIO() const;
	string GetSubject() const;
	int GetGrade() const;

	// модификаторы
	void SetFIO(string);
	void SetSubject(string);
	void SetGrade(int);

	void Print();

	// конструктор с параметрами
	Exam(string, string, int);

	//конструктор без параметров (конструктор по умолчанию)
	Exam();

	// конструктор-копирования
	Exam(const Exam& p);

	//деструктор
	~Exam();
};

// конструкторы
Exam::Exam(string fio, string subject, int grade) {
	FIO = fio;
	Subject = subject;
	Grade = grade;
}
// конструктор по умолчанию 
Exam::Exam() {
	FIO = "Ivanov Ivan Ivanovich";
	Subject = "Russian language";
	Grade = 4;
}
// конструктор копирования
Exam::Exam(const Exam& e) {
	FIO = e.FIO;
	Subject = e.Subject;
	Grade = e.Grade;
}
// деструктор
Exam::~Exam() {

}

//методы
string Exam::GetFIO() const {
	return FIO;
}

string Exam::GetSubject() const {
	return Subject;
}

int Exam::GetGrade() const {
	return Grade;
}

void Exam::SetFIO(string new_fio) {
	FIO = new_fio;
}

void Exam::SetSubject(string new_subject) {
	FIO = new_subject;
}

void Exam::SetGrade(int new_drade) {
	Grade = new_drade;
}

void Exam::Print() {
	cout << "FIO: " << FIO << endl;
	cout << "Subject: " << Subject << endl;
	cout << "Grade: " << Grade << endl;
}

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
