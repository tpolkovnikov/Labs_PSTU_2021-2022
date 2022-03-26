#include <iostream>
#include <stack>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	// ������ ����
	stack <double> steck;
	// ������ �����
	int size = 10;
	// ���������� �����
	for (int i = 1; i < size + 1; i++) {
		steck.push(i);
	}
	// ������ ������ ����
	stack <double> steck_1;

	// ��������� � ����� ���� �������� �� �������
	if (size % 2 == 0) {
		for (int i = 1; i < size + 1; i++) {
			if (i % 2 == 0) {
				steck_1.push(steck.top());
			}
			steck.pop();
		}
	}
	else {
		for (int i = 1; i < size + 1; i++) {
			if (i % 2 != 0) {
				steck_1.push(steck.top());
			}
			steck.pop();
		}
	}
	// ������� ���� 
	cout << "�������� ����: " << endl;
	while (!steck_1.empty()) {
		cout << steck_1.top();
		steck_1.pop();
	}
	cout << endl << endl;
	return 0;
}