#include <iostream>
#include <string>
using namespace std;

int kmpSearch(string str, string substr) {
	int i, j, strlen, substrlen;
	strlen = str.length();
	substrlen = substr.length();
	int* d = new int[substrlen];

	i = 0;
	j = -1;
	d[0] = -1;
	while (i < substrlen - 1) {
		while ((j >= 0) && (substr[j] != substr[i])) {
			j = d[j];
		}
		++i;
		++j;
		if (substr[i] == substr[j]) {
			d[i] = d[j];
		}
		else {
			d[i] = j;
		}
	}
	i = 0;
	j = 0;
	for (i = 0, j = 0; (i <= strlen - 1) && (j <= substrlen - 1); ++i, ++j) {
		while ((j >= 0) && (substr[j] != str[i])) {
			j = d[j];
		}
	}
	delete[] d;

	if (j == substrlen) {
		return i - j;
	}
	else {
		return -1;
	}
}

int main() {
	setlocale(LC_ALL, "rus");

	string str, substr;
	cout << "¬ведите строку: ";
	cin >> str;
	cout << endl;

	cout << "¬ведите подстроку: ";
	cin >> substr;
	cout << endl;
	
	int k = kmpSearch(str, substr);
	for (int i = k; i < k + substr.length(); i++)
	{
		str[i] = str[i + substr.length()];
	}
	cout << str;

	return 0;
}
