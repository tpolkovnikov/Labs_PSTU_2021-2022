#include <iostream>
#include"Class_Exam.h"

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Rus");
	// ������������� ������� � ����� ������������ � �����������
	Exam test("Polkovnikov Tihon Yurievich", "Physics", 3);

	// ����� ������������ ��� ���������� (����������� �� ���������)
	Exam test_1;

	// ����� ������������-�����������
	Exam test_3 = test_1;
	
	// ����� �������
	test_3.Print();
	

	return 0;
}