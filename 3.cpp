
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
		cout << "������� �������� �����:";
		cin >> name;
		cout << "������� ������ �����:";
		cin >> author;
		cout << "������� ���� �����:";
		cin >> genre;
		cout << "������� ��� �����:";
		cin >> year;
		cout << "������� ���� �����:";
		cin >> price;
		cout << "������� ���������� ������� �����:";
		cin >> pages;
	}

	void show()
	{
		setlocale(LC_ALL, "rus");
		cout << "��������:" << name << endl;
		cout << "�����:" << author << endl;
		cout << "����:" << genre << endl;
		cout << "���:" << year << endl;
		cout << "����:" << price << endl;
		cout << "���������� �������:" << pages << endl;
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
