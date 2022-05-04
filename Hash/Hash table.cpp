#include <iostream>
#include <string>
#include <math.h> 
#include <vector>

using namespace std;

struct person
{
    string name;
    string pass;
    string phone;
};

struct hashed_person
{
    person current;
    hashed_person* next;
};

int calc_hash(string key, int size)
{
    double f;
    return int(size * modf(stoll(key) * 0.803384982, &f));
}

pair<hashed_person**, int> create_table(person* items, int n, int size)
{
    hashed_person** table = new hashed_person * [size];
    for (int i = 0; i < size; i++)
    {
        table[i] = nullptr;
    }
    int collision_counter = 0;
    for (int i = 0; i < n; i++)
    {
        int hash = calc_hash(items[i].phone, size);
        if (table[hash] == nullptr)
        {
            hashed_person* p = new hashed_person;
            p->current = items[i];
            p->next = nullptr;
            table[hash] = p;
        }
        else
        {
            collision_counter++;
            hashed_person* cur_hashed = table[hash];
            while (cur_hashed->next != nullptr)
            {
                cur_hashed = cur_hashed->next;
            }
            hashed_person* p = new hashed_person;
            p->current = items[i];
            p->next = nullptr;
            cur_hashed->next = p;
        }
    }
    return make_pair(table, collision_counter);
}

vector<string> surnames = { "Иванов","Петров","Сидоров","Тесла","Маск","Эйнштейн","Ньютон","Гук","Кюри","Сталин","Ленин","Маркс" };
vector<string> names = { "Иван","Петр","Сидор","Никола","Илон","Альберт","Исаак","Роберт","Мария","Иосиф","Владимир","Карл","Алексей","Михаил","Дмитрий" };
vector<string> patronymics = { "Иванович","Петрович","Сидорович","Николаевич","Илонович","Альбертович","Исаакович","Робертович","Маркович","Иосифович","Владимирович","Карлович","Алексеевич","Михаилович","Дмитриевич" };

int main()
{
    setlocale(LC_ALL, "Rus");

    int n;
    cout << "Введите количество людей для генерации ";
    cin >> n;
    person* people = new person[n];

    //заполнение 
    for (int i = 0; i < n; i++)
    {
        person p;
        string full_name;
        full_name += (surnames[rand() % surnames.size()]) + ' ';
        full_name += (names[rand() % names.size()]) + ' ';
        full_name += (patronymics[rand() % patronymics.size()]);
        p.name = full_name;

        string pass;
        for (int i = 0; i < 10; i++)
        {
            pass.push_back(rand() % 10 + 48);
        }
        p.pass = pass;

        string phone;
        phone += "79";
        for (int i = 0; i < 9; i++)
        {
            phone.push_back(rand() % 10 + 48);
        }
        p.phone = phone;
        people[i] = p;
    }

    cout << "Введите размер хэш-таблицы: ";
    int size;
    cin >> size;

    auto table = create_table(people, n, size);
    cout << "Кол-во коллизий: " << table.second << endl;

    // интерфейс 
    int command_code = -1;
    while (command_code != 0)
    {
        cout << "0 — выход, 1 — вывод списка людей, 2 — поиск, 3 — регенерация таблицы" << endl;
        cin >> command_code;
        switch (command_code)
        {
        case 1: {
            for (int i = 0; i < n; i++)
            {
                cout << people[i].name << ' ' << people[i].pass << ' ' << people[i].phone << endl;
            }
            break;
        }
        case 2: {
            string search_key;
            cin.ignore();
            getline(cin, search_key);
            int hash = calc_hash(search_key, size);
            hashed_person* cur = table.first[hash];

            if (cur != nullptr)
            {
                while (cur->current.phone != search_key && cur->next != nullptr)
                {
                    cur = cur->next;
                }
                if (cur->current.phone == search_key)
                {
                    cout << "Паспорт: " << cur->current.name << endl;
                    cout << "Телефон: " << cur->current.pass << endl;
                }
                else
                {
                    cout << "Ничего не найдено!" << endl;
                }
            }
            else
            {
                cout << "Ничего не найдено!" << endl;
            }
            break;
        }
        case 3: {
            cout << "Введите новый размер: ";
            cin >> size;
            auto table = create_table(people, n, size);
            cout << "Кол-во коллизий: " << table.second << endl;
        }
        }
    }
    return 0;
}
