#include <iostream>
using namespace std;

class Iterator {
	friend class plenty;
private:
	int *elem;
public:
	Iterator() { elem = 0; }
	Iterator(const Iterator& it) { elem = it.elem; }

	bool operator==(const Iterator& it) { return elem == it.elem; }
	bool operator!=(const Iterator& it) { return elem != it.elem; }

	void operator++() { 
		elem++;
	}

	void operator--() { --elem; }

	int operator*()const { return *elem; }
};

class plenty
{
private:
	int size;
	int* data;
	Iterator beg;
	Iterator end;
public:
	plenty();
	plenty(int, int k = 0); // дл€ того, чтобы проходило plenty(size)
	plenty(const plenty&);
	~plenty(void);

	int& operator[](int);
	// разность множеств
	plenty operator-(const plenty&);
	int operator()();

	plenty& operator=(const plenty&);

	friend ostream& operator<<(ostream& out, const plenty&);
	friend istream& operator>>(istream& in, plenty&);

	Iterator first() { return beg; }
	Iterator last() { return end; }

};

plenty::plenty() = default;
plenty::plenty(int s, int k) {
	size = s;
	data = new int[size];
	for (int i = 0; i < size; i++) {
		data[i] = k;
	}
	beg.elem = &data[0];
	end.elem = &data[size];
}
plenty::plenty(const plenty& p) {
	size = p.size;
	data = new int[size];
	for (int i = 0; i < size; i++) {
		data[i] = p.data[i];
	}
	beg = p.beg;
	end = p.end;
}
plenty::~plenty(void) {
	delete[]data;
	data = nullptr;
}

int& plenty::operator[] (int index) {
	if (index < size) return data[index];
	else cout << "\nError! Index>size";
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
	beg = p.beg;
	end = p.end;
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
	setlocale(LC_ALL, "Rus");
	plenty a(5);//создали вектор из 5 элементов, заполненный нул€ми 
	cout << "множество а: " << endl;
	cout<<a<<"\n";//вывели значени€ элементов вектора 
	cout << "¬ведите значени€ элементов множества: " << endl;
	cin >> a;//ввели с клавиатуры значени€ элементов вектора 
	cout << "множество а: " << endl;
	cout<<a<<"\n";//вывели значени€ элементов вектора 
	a[2] = 100;//использу€ операцию [] присвоили новое значение элементу  
	cout << "множество а с увеличение третьего элемента на 100: " << endl;
	cout<<a<<"\n";//вывели значени€ элементов вектора 

	plenty b(5);//создали вектор из 5 элементов, заполненный нул€ми 
	cout << "множество b: " << endl;
	cout << b << "\n";//вывели значени€ элементов вектора 
	cout << "¬ведите значени€ элементов множества: " << endl;
	cin >> b;//ввели с клавиатуры значени€ элементов вектора 
	cout << "множество b: " << endl;
	cout << b << "\n";//вывели значени€ элементов вектора 
	
	plenty c(5);
	c = a - b;
	cout << "множество c = множество a - множество b:" << endl << c << endl;

	Iterator i;
	//выводим значени€ элеменов вектора с помощью итератора 
	cout << "выводим значени€ элеменов множества a с помощью итератора" << endl;
	for (i = a.first(); i != a.last(); ++i) {
		cout << *i << " ";
	}
	cout << endl;
	//выводим предпоследнее значени€ элеменов вектора с помощью итератора
	cout << "выводим предпоследнее значени€ элеменов вектора с помощью итератора" << endl;
	i = a.last();
	--i; --i;
	cout << *i;
	return 0;
}

