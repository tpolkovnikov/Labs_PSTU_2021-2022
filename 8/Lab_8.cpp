#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Information {
	string carrier;
	int volume;
	string name;
	string author;

};

void full_arr(Information arr_info[], int number, string carrier, int volume, string name, string author) {
	arr_info[number].author = author;
	arr_info[number].name = name;
	arr_info[number].volume = volume;
	arr_info[number].carrier = carrier;
}

void show_arr_struct(Information arr_info[], const int size) {
	for (int i = 0; i < size; i++) {
		cout << i + 1 << ")";
		cout << arr_info[i].carrier << ";";
		cout << arr_info[i].volume << ";";
		cout << arr_info[i].name << ";";
		cout << arr_info[i].author << ";";
		cout << endl;
	}
}

void delete_select_el(Information arr_info[], const int size, int selected_volume) {
	int c = 0;
	int t = 0;
	for (int i = 0; i < size; i++) {
		if ((arr_info[i].volume == selected_volume) && (t == 0)) {
			t = 1;
			continue;

		}
		arr_info[c] = arr_info[i];
		c++;
	}
}

void add_el(Information arr_info[], const int size, int selected_number) {
	int c = 0;
	int t = 0;
	Information* arr_info_new = new Information[size];
	for (int i = 0; i < size - 1; i++) {
		if (i == selected_number - 1) {
			arr_info_new[c + 1] = arr_info[i];
			full_arr(arr_info_new, selected_number - 1, "Book", 123, "The Silmarillion", "Tolkien");
			c++;
			t = 1;
			continue;
		}
		else {
			if (t == 1) {
				arr_info_new[c + 1] = arr_info[i];
				c++;
			}
			else {
				arr_info_new[c] = arr_info[i];
				c++;
			}

		}
	}
	for (int i = 0; i < size; i++) {
		arr_info[i] = arr_info_new[i];
	}
}


int main()
{
	setlocale(LC_ALL, "Rus");
	int const size = 4;
	int selected_volume;
	int selected_number;
	Information arr_info[size];
	full_arr(arr_info, 0, "Book", 466, "Lord of the Rings 1", "Tolkien");
	full_arr(arr_info, 1, "Book", 325, "The Lord of the Rings 2", "Tolkien");
	full_arr(arr_info, 2, "Book", 325, "The Lord of the Rings 3", "Tolkien");
	full_arr(arr_info, 3, "Book", 364, "Unfinished Tales", "Tolkien");

	ofstream fout;
	fout.open("Information.txt", ios::binary);
	if (fout.is_open())
	{
		for (int i = 0; i < size; i++)
		{
			fout.write((char*)&arr_info[i], sizeof(arr_info));
		}
		fout.close();
	}

	Information* arr_info_new = new Information[size];
	ifstream fin("Information.txt", ios::binary);
	if (fin.is_open())
	{
		for (int i = 0; i < size; i++) {
			fin.read((char*)&arr_info_new[i], sizeof(Information));
		}
		fin.close();
	}
	else {
		cout << "Ошибка в открытии файла ";
	}
	cout << "Массив структур: " << endl;
	show_arr_struct(arr_info_new, size);
	cout << endl;

	cout << "Выберете с каким объёмом информации удалить элемент" << endl;
	int t = 0;
	while (t != 1) {
		cin >> selected_volume;
		for (int i = 0; i < size; i++) {
			if (arr_info[i].volume == selected_volume) {
				t = 1;
				break;
			}
		}
		if (t != 1) {
			cout << "Элемента с таким объёмом информации нет, пожалуйста, введите заново" << endl;
			cout << "Выберете с каким объёмом информации удалить элемент:" << endl;
		}
	}
	cout << endl << "Удаление первого элемента с volume = " << selected_volume << endl;
	delete_select_el(arr_info, size, selected_volume);
	show_arr_struct(arr_info, size - 1);
	cout << endl << endl;

	cout << "Выберете номер элемента, перед которым вставить новый элемент:" << endl;
	t = 0;
	while (t != 1) {
		cin >> selected_number;

		for (int i = 0; i < size - 1; i++) {
			if (i + 1 == selected_number) {
				t = 1;
				break;
			}
		}
		if (t != 1) {
			cout << "Элемента с таким номером, пожалуйста, введите заново" << endl;
			cout << "Выберете номер элемента, перед которым вставить новый элемент:" << endl;
		}
	}
	cout << endl << "Добавление элемента перед элементом с номерном = " << selected_number << endl;
	add_el(arr_info, size, selected_number);
	show_arr_struct(arr_info, size);
	cout << endl << endl;
	return 0;
}