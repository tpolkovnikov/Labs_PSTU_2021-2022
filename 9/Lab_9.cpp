#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	string path = "F1.txt"; 

	string min_word = "ffffffffffffffffffffffffffffffffffffffffffffff";
	string temp_word;

	string path_2 = "F2.txt";
	ofstream fout;
	fout.open(path_2);

	ifstream file(path);
	string str;                
	string first_letter;
	while (getline(file, str)){
		string word;
		str += " ";
		for (char ch : str) {
			if ((ch == ' ')) {
				first_letter += word[0];  
				word = "";
			}
			else {
				word += ch;
			}
		}
		bool choice = true;
		for (char ch : first_letter) {
			if (count(first_letter.begin(), first_letter.end(), ch) != 1) {
				choice = false;
				break;
			}
		}
		if (choice) {
			fout << str << endl;
			cout << str<< endl;
			for (char ch : str) {
				if ((ch == ' ')) {
					if (temp_word.length() < min_word.length()) {
						min_word = temp_word;
						temp_word = "";
					}
					else {
						temp_word += ch;
					}
				}
			}
		}
		first_letter = "";
	}
	fout.close();
	cout <<"\nСамое короткое слово " << min_word << endl;
	return 0;
}