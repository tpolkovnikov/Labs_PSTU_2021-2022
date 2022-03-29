#pragma once
#include <iostream>
#include <string>
using namespace std;

class Exam {
	string FIO;
	string Subject;
	int Grade;
public:
	// ���������
	string GetFIO() const;
	string GetSubject() const;
	int GetGrade() const;

	// ������������
	void SetFIO(string);
	void SetSubject(string);
	void SetGrade(int);

	void Print();

	// ����������� � �����������
	Exam(string, string, int);

	//����������� ��� ���������� (����������� �� ���������)
	Exam();

	// �����������-�����������
	Exam(const Exam&p);

	//����������
	~Exam();


};