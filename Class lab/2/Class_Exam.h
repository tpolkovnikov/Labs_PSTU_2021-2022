#pragma once
#include <iostream>
#include <string>
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
	Exam(const Exam&p);

	//деструктор
	~Exam();
};
