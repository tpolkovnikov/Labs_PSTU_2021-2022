#include <iostream>
#include <string>
using namespace std;

const int max_size = 20;

class error
{
	string str;
public:
	error(string s) { str = s; }
	void what() { cout << str << endl; }
};

class plenty
{
private:
	int size;
	int* data;
public:
	plenty() { size = 0; data = nullptr; }
	plenty(int);
	plenty(int, int*);
	plenty(const plenty&);
	~plenty(void);

	int& operator[](int);
	plenty operator-(const plenty&);
	plenty operator--();
	int operator()();
	plenty& operator=(const plenty&);


	friend ostream& operator<<(ostream& out, const plenty&);
	friend istream& operator>>(istream& in, plenty&);

};

plenty::plenty(int s) {
	if (s > max_size) throw error("Error: plenty length more than max_size");
	size = s;
	data = new int[size];
	for (int i = 0; i < size; i++) {
		data[i] = 0;
	}
}
plenty::plenty(int s, int* d) {
	if (s > max_size) throw 1;
	size = s;
	data = new int[size];
	for (int i = 0; i < size; i++) {
		data[i] = d[i];
	}
}
plenty::plenty(const plenty& p) {
	size = p.size;
	data = new int[size];
	for (int i = 0; i < size; i++) {
		data[i] = p.data[i];
	}
}
plenty::~plenty(void) {
	delete[]data;
	data = nullptr;
}

int& plenty::operator[] (int index) {
	if (index < 0) throw error("Error: index < 0");
	if (index >= size) throw error("Error: index > size");
	return data[index];



}

plenty plenty::operator--() {
	if (size == 0) throw error("Error: plenty is empty");
	if (size == 1) {
		size = 0;
		delete[]data;
		data = nullptr;
		return *this;
	}
	plenty temp(size);
	delete[]data;
	size--;
	data = new int[size];
	for (int i = 0; i < size; i++) {
		data[i] = temp.data[i];
	}
	return *this;

}
plenty plenty::operator-(const plenty& p) {
	plenty temp(size);
	for (int i = 0; i < size; i++) {
		temp.data[i] = this->data[i] - p.data[i];
	}
	return temp;
}

int plenty::operator()() {
	return size;
}
plenty& plenty::operator=(const plenty& p) {
	if (this == &p) return *this;
	size = p.size;
	if (data != 0) delete[]data;
	data = new int[size];
	for (int i = 0; i < size; i++) {
		data[i] = p.data[i];
	}
	return *this;
}

ostream& operator<< (ostream& out, const plenty& a) {
	for (int i = 0; i < a.size; i++) {
		cout << a.data[i] << " ";
	}
	return out;
}
istream& operator>>(istream& in, plenty& a) {
	for (int i = 0; i < a(); i++) {
		in >> a.data[i];
	}
	return in;
}

int main()
{
	cout << "Variant 2:\n\n";
	try {
		int* temp = new int[2];
		temp[0] = 3;
		temp[1] = 5;
		plenty x(2, temp);
		plenty z = x;
		plenty y;
		cout << "plenty x: " << x << endl;
		cout << "Index? ";
		int i;
		cin >> i;

		cout << "plenty x[index] : " << x[i] << endl;
		cout << "plenty z: " << z << endl;
		y = x - z;
		cout << "plenty y = plenty x - planty z : " << y << endl << endl;
		--y;
		cout << "planty y-- : " << y << endl;
	}
	catch (error e) {
		e.what();
	}
	return 0;
}
