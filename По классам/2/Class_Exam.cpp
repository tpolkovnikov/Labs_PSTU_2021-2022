#include<iostream>
#include"Class_Exam.h"
using namespace std;

// конструкторы
Exam::Exam(string fio, string subject, int grade) {
	FIO = fio;
	Subject = subject;
	Grade = grade;
}

Exam::Exam() {
	FIO = "Ivanov Ivan Ivanovich";
	Subject = "Russian language";
	Grade = 4;
}

Exam::Exam(const Exam&e) {
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

vo
