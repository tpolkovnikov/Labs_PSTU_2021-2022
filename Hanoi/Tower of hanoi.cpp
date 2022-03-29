#include <iostream>
using namespace std;

void move(char tower1, char tower2) {
	cout << "�� ������� " << tower1 << "  �� �������� " << tower2 << endl;
}

void moveTower(int amount, char tower1, char tower2, char temp_tower) {
	if (amount == 0) {
		return;
	}
	moveTower(amount - 1, tower1, temp_tower, tower2);
	move(tower1, tower2);
	moveTower(amount - 1, temp_tower, tower2, tower1);
}

int main() 
{
	setlocale(LC_ALL, "Rus");
	cout << "������� ���������� ������: " << endl;
	int amount;
	cin >> amount;
	cout << endl << "�������� �������" << endl;
	moveTower(amount, 'A', 'B', 'C');
	return 0;
}