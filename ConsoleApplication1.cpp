#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>

using namespace std;

struct P {
	char brand[100];
	char model[100];
	char color[100];
	float min_t, max_t;
	int par;
	float p;
};

void Print(P par)
{
	cout << "Գ��� " << par.brand << endl;
	cout << "������ " << par.model << endl;
	cout << "���� " << par.color << endl;
	cout << "̳� � " << par.min_t << endl;
	cout << "�a�� � " << par.max_t << endl;
	cout << "��������� " << par.p << endl;
	if (par.par == 1) cout << "� ������ ����";
	else cout << "���� ������ ����";
}

void init(P& par) {
	cout << "�����, ������, ����, �������� �����������, ����������� �����������, ������ ���� ���(1)/�(0), ���������" << endl;
	cin >> par.brand >> par.model >> par.color >> par.min_t >> par.max_t >> par.par >> par.p;

}

int main()
{
	setlocale(LC_ALL, "");


	P par;

	init(par);
	Print(par);

}