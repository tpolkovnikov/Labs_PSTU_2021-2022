#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;



class Money {
private:
	long ruble;
	int kopeck;
public:
	// Конструктор с параметрами
	Money(long Ruble, int Kopeck) : ruble(Ruble), kopeck(Kopeck) {}

	// Конструктор без параметров
	Money() : ruble(10), kopeck(50) {}

	// Конструктор копирования
	Money(const Money& e) : ruble(e.ruble), kopeck(e.kopeck) {}

	// Деструктор
	~Money() = default;
	 
	// модификаторы
	void setRuble(long Ruble) {
		ruble = Ruble;
	}
	void setKopeck(int Kopeck) {
		kopeck = Kopeck;
	}

	// селекторы
	long getRuble() {
		return ruble;
	}
	int getKopeck() {
		return kopeck;
	}

	// оператор сравнения ==
	bool operator==(Money& p) {
		if ((ruble * 100 + kopeck) == (p.ruble * 100 + p.kopeck)) {
			return true;
		}
		else { return false; }
	}

	// оператор сранвнения !=
	bool operator!= (Money& p) {
		if ((ruble * 100 + kopeck) != (p.ruble * 100 + p.kopeck)) {
			return true;
		}
		else { return false; }
	}

	bool operator<(Money& p) {
		if ((ruble * 100 + kopeck) < (p.ruble * 100 + p.kopeck)) {
			return true;
		}
		else { return false; }
	}

	bool operator>(Money& p) {
		if ((ruble * 100 + kopeck) > (p.ruble * 100 + p.kopeck)) {
			return true;
		}
		else { return false; }
	}

	Money operator+(Money& p) {
		this->kopeck += p.kopeck;
		while (this->kopeck >= 100) {
			this->kopeck -= 100;
			this->ruble += 1;
		}
		this->ruble += p.ruble;
		return *this;
	}
	Money operator/(int n) {
		kopeck /= n;
		ruble /= n;
		return *this;
	}
	Money operator/=(int n) {
		kopeck /= n;
		ruble /= n;
		return *this;
	}
	Money operator*(Money& p) {
		this->kopeck = ((this->ruble * 100) + this->kopeck) * ((p.ruble * 100) + p.kopeck);
		this->ruble = this->kopeck / 10000;
		this->kopeck = this->kopeck % 10000;
		return *this;	
	}

	// оператор присваивания
	Money& operator=(const Money& t)
	{
		if (&t == this) {
			return *this;
		}
		ruble = t.ruble;
		kopeck = t.kopeck;
		return *this;
	}

	// перегрузка операторов ввод
	friend istream& operator>>(istream& in, Money& t);
	friend ostream& operator<<(ostream& out, const Money& tmp);
};

istream& operator >> (istream& in, Money& t) {
	cout << "ruble: "; in >> t.ruble;
	cout << "kopeck: "; in >> t.kopeck;
	return in;
}

ostream& operator<<(ostream& out, const Money& t)
{
	return (out << t.ruble << "," << t.kopeck);
}

void print_vector(vector<Money> v) {
	cout << "v1: \n";
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "  ";
	}
	cout << endl << endl << endl;
}

int main()
{
	setlocale(LC_ALL, "Rus");

	// инициализация объктов - элементов вектора
	Money A(5500, 20);
	Money B(3200, 0);
	Money C(45, 55);
	Money D(132, 68);
	Money E(9, 19);
	Money F(0, 50);
	Money G(132, 32);
	Money K(14990, 0);
	Money L(231, 0);
	Money P(82, 90);

	// заполнение вектора
	vector<Money> v1;
	v1.push_back(A);
	v1.push_back(B);
	v1.push_back(C);
	v1.push_back(D);
	v1.push_back(E);
	v1.push_back(F);
	v1.push_back(G);
	v1.push_back(K);
	v1.push_back(L);
	v1.push_back(P);

	// печать вектора
	print_vector(v1);
	
	//
	// 1) Найти минимальный элемент и добавить его на заданную позицию 
	// 

	// нахождение минимума
	Money min = *(min_element(v1.begin(), v1.end()));
	// нахождение индекса минимума
	int index_pos = 0;
	cout << "Ввеодите индекс: \n"; cin >> index_pos;
	//добавление минимального элемента на заданную позицию
	v1[index_pos] = min;
	print_vector(v1);

	//
	// 2) Найти элементы больше среднего арифметического и удалить их из контейнера
	// 

	// нахождение суммы элементов
	Money sum_of_elems(0,0);
	for_each(v1.begin(), v1.end(), [&](Money n) { sum_of_elems = sum_of_elems + n; });

	// нахождение среднего арифметического 
	Money average = sum_of_elems / v1.size();
	cout << "Среднее арифметическое: \n" << average << endl;
	// удаление всех элементов, которые больше среднего арифметического
	v1.erase(v1.erase((remove_if(v1.begin(), v1.end(), [&average](Money num) {
		return num > average;
		}))));
	cout << "Вектор после удаления всех элементов, которые больше среднего арифметического\n";
	print_vector(v1);

	//
	// 3) Каждый элемент домножить на максимальный элемент контейнера
	//

	// нахождение максимального элемента вектора
	Money max = *(max_element(v1.begin(), v1.end()));
	cout << "max: \n" << max << endl;
	
	// умножение элементов вектора на максимальный элемент
	transform(v1.begin(), v1.end(), v1.begin(), [&max](auto& c) {return c * max; });
	cout << "Вектор после домножения на максимальный элемент\n";
	print_vector(v1);

	return 0;
}