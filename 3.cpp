
#include "iostream"
#include "cstdlib"
#include "cmath"
#include "ctime"
#include "string"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "locale"
#include "clocale"

using namespace std;

class Book
{
protected:
	string name, author, genre;
	int year, price, pages;

public:
	void set()
	{
		setlocale(LC_ALL, "rus");
		cout << "Введите название книги:";
		cin >> name;
		cout << "Введите автора книги:";
		cin >> author;
		cout << "Введите жанр книги:";
		cin >> genre;
		cout << "Введите год книги:";
		cin >> year;
		cout << "Введите цену книги:";
		cin >> price;
		cout << "Введите количество страниц книги:";
		cin >> pages;
	}

	void show()
	{
		setlocale(LC_ALL, "rus");
		cout << "Название:" << name << endl;
		cout << "Автор:" << author << endl;
		cout << "Жанр:" << genre << endl;
		cout << "Год:" << year << endl;
		cout << "Цена:" << price << endl;
		cout << "Количество страниц:" << pages << endl;
	}
};

int main()
{
	Book x;
	x.set();
	x.show();
	system("pause");
	return 0;
}
