#include <iostream>
#include <string>
using namespace std;

const int evNothing = 0;
const int evMessage = 100;
const int cmAdd = 1;
const int cmDel = 2;
const int cmShow = 3;
const int nameInfo = 4;
const int cmMake = 5;
const int cmQuit = 101;

struct TEvent {
	int what;
	union {
		int command;
		struct {
			int message;
			int a;
		};
	};
};

class Object {
public:
	Object() = default;
	~Object() = default;
	virtual void Show() = 0;
	virtual void Input() = 0;
	virtual void ShowName() = 0;
};

class Print :public Object {
protected:
	string name;
	string author;
public:
	Print() = default;
	virtual ~Print() = default;
	Print(string n, string a) {
		name = n;
		author = a;
	}
	Print(const Print& p) {
		name = p.name;
		author = p.author;
	}

	string GetName() {
		return name;
	}
	string GetAuthor() {
		return author;
	}

	void SetName(string n) {
		name = n;
	}
	void SetAuthor(string a) {
		author = a;
	}

	void Show() override {
		cout << "\nName : " << name;
		cout << "\nAuthor : " << author;
		cout << endl;
	}
	void Input() override {
		cout << "\nName ? "; cin >> name;
		cout << "\nAuthor ? "; cin >> author;
	}

	Print& operator=(const Print& p) {
		if (&p == this) return *this;
		name = p.name;
		author = p.author;
		return *this;
	}
	void ShowName() override {
		cout << "Name: " << name << endl;
	}
};

class Magazin : public Print {
protected:
	int pages;
public:
	Magazin() = default;
	~Magazin() = default;
	Magazin(string n, string a, int p) {
		name = n;
		author = a;
		pages = p;
	}
	Magazin(const Magazin& m) {
		name = m.name;
		author = m.author;
		pages = m.pages;
	}

	int GetPages() {
		return pages;
	}
	void SetPages(int p) {
		pages = p;
	}

	void Show() override {
		cout << "\nName : " << name;
		cout << "\nAuthor : " << author;
		cout << "\nPages : " << pages;
	}
	void Input() override {
		cout << "\nName ? "; cin >> name;
		cout << "\nAuthor ? "; cin >> author;
		cout << "\nPages ? "; cin >> pages;
	}

	Magazin& operator=(const Magazin& m) {
		if (&m == this) return *this;
		name = m.name;
		author = m.author;
		pages = m.pages;
	}
};

class List {
protected:
	Object** beg;
	int size;
	int cur;
public:
	List() = default;
	~List() {
		if (beg != 0) delete[] beg;
		beg = nullptr;
	}
	List(int n) {
		beg = new Object * [n];
		cur = 0;
		size = n;
	}

	void Add() {
		Object* p = nullptr;
		cout << "1.Print" << endl;
		cout << "2.Magazin" << endl;
		int choice;
		cin >> choice;
		if (choice == 1) {
			Print* temp = new Print;
			temp->Input();
			p = temp;
			if (cur < size) {
				beg[cur] = p;
				cur++;
			}
		}
		else if (choice == 2) {
			Magazin* b = new Magazin;
			b->Input();
			p = b;
			if (cur < size) {
				beg[cur] = p;
				cur++;
			}
		}
		else return;
	}
	void Show() {
		if (cur == 0) cout << "Empty" << endl;
		Object** p = beg;
		for (int i = 0; i < cur; i++) {
			(*p)->Show();
			p++;
		}
		cout << endl;
	}

	int operator()() {
		return cur;
	}
	//удаление элемента из массива, память не освобождается!
	void Del() {
		if (cur == 0)return;
		cur--;
	}
	void ShowName() {
		if (cur == 0) cout << "Empty" << endl;
		Object** p = beg;
		for (int i = 0; i < cur; i++) {
			(*p)->ShowName();
			p++;
		}
		cout << endl;
	}
};

class Dialog : public List {
protected:
	int EndState;
public:
	Dialog() :List() {
		EndState = 0;
	}
	~Dialog() = default;

	void GetEvent(TEvent& event) {
		string OpInt = "m-nszq";
		string s;
		string param;
		char code;
		cout << '>';
		cin >> s;
		code = s[0];
		if (OpInt.find(code) >= 0) {
			event.what = evMessage;
			switch (code) {
			case 'm': event.command = cmMake; break;
			case '+': event.command = cmAdd; break;
			case '-': event.command = cmDel; break;
			case 's': event.command = cmShow; break;
			case 'z': event.command = nameInfo; break;
			case 'q': event.command = cmQuit; break;
			}
			if (s.length() > 1) {
				param = s.substr(1, s.length() - 1);
				int A = atoi(param.c_str());
				event.a = A;
			}
		}
		else {
			event.what = evNothing;
		}
	}
	void HandleEvent(TEvent& event) {
		if (event.what == evMessage) {
			switch (event.command) {
			case cmMake:
				size = event.a;
				beg = new Object * [size];
				ClearEvent(event);
				break;
			case cmAdd:
				Add();
				ClearEvent(event);
				break;
			case cmDel:
				Del();
				ClearEvent(event);
				break;
			case cmShow:
				Show();
				break;
			case cmQuit:
				EndExec();
				ClearEvent(event);
				break;

			case nameInfo:
				ShowName();
				ClearEvent(event);
				break;
			};
		};
	}
	int Valid() {
		if (EndState == 0) return 0;
		else return 1;
	}
	void EndExec() {
		EndState = 1;
	}
	void ClearEvent(TEvent& event) {
		event.what = evNothing;
	}
	int Execute()
	{
		TEvent event;
		do {
			EndState = 0;
			GetEvent(event);
			HandleEvent(event);
		} while (!Valid());
		return EndState;
	}

};

int main()
{
	setlocale(LC_ALL, "Rus");
	std::cout << "m - создать массив (m2 - из 2 элементов)" << "\n+ - добавить элемент" << "\n- - удалить элемент"
        << "\ns - просмотр массива" << "\nz - Вывести информацию о размере всех элементов массива" << "\nq - выход" << "" << std::endl;
	Dialog d;
	d.Execute();
	return 0;
}
