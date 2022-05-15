#include <iostream>
#include <string>
using namespace std;

int bmSearch(string str, string substr) {
	int strlen, substrlen, result = -1;
	strlen = str.size(); substrlen = substr.size();

	if (strlen != 0 && substrlen != 0) {
		int i, pos;
		int bias[256];

		for (i = 0; i < 256; i++) {
			bias[i] = substrlen;
		}

		for (i = substrlen - 2; i >= 0; i--) {
			if (bias[int((unsigned char)substr[i])] == substrlen) {
				bias[int((unsigned char)substr[i])] = substrlen - i - 1;
			}
		}
		pos = substrlen - 1;
		while (pos < strlen) {
			if (substr[substrlen - 1] != str[pos]) {
				pos += bias[int((unsigned char)str[pos])];
			}

			else {
				for (i = substrlen - 1; i >= 0; i--) {
					if (substr[i] != str[pos - substrlen + i + 1]) {
						pos += bias[int((unsigned char)str[pos - substrlen + i + 1])];
						i = -1;
					}
					else if (i == 0) {
						return pos - substrlen + 1;
					}
				}
			}
		}
	}
	return result;
}

int main() 
{
	setlocale(LC_ALL, "rus");
	string str;
	cout << "Введите строку: ";
	cin >> str;
	cout << endl;

	string substr;
	cout << "Введите подстроку: ";
	cin >> substr;
	cout << endl;

	int n = bmSearch(str, substr);
	int s = str.size();
	int s1 = substr.size();
	while (n != -1) {
		for (int i = 0; i < s1; i++) {
			for (int j = n; j < s; j++) {
				str[j] = str[j + 1];
			}
		}
		n = bmSearch(str, substr);
	}

	str += substr;
	cout << "Полученная строка с переносом подстроки " << substr << " в конец : " << str << endl;
	return 0;	
}
