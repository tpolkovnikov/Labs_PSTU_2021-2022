#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	char line[255];
	cout << "Ââåäèòå ñòðîêó: " << endl;
	gets_s(line, 255);
	string result = "";
	string word = "";
	for (char c : line) {
		if (c != ' ' && c != '.') {
			word += c;
		}
		if (c == ' ' || c == '.') {
			string temp = word;
			reverse(temp.begin(), temp.end());
			if (word == temp) {
				result += word;
				result += " ";
			}
			word = "";
		}
	}
	cout << "Слова - палиндромы: " << endl;
	cout << result;
	return 0;
}
