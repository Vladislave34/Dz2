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
	cout << "Фірму " << par.brand << endl;
	cout << "Модель " << par.model << endl;
	cout << "Колір " << par.color << endl;
	cout << "Мін т " << par.min_t << endl;
	cout << "Мaкс т " << par.max_t << endl;
	cout << "Потужність " << par.p << endl;
	if (par.par == 1) cout << "Є подача пари";
	else cout << "Нема подача пари";
}

void init(P& par) {
	cout << "фірма, модель, колір, мінімальна температура, максимальна температура, подача пари так(1)/ні(0), потужність" << endl;
	cin >> par.brand >> par.model >> par.color >> par.min_t >> par.max_t >> par.par >> par.p;

}

int main()
{
	setlocale(LC_ALL, "");


	P par;

	init(par);
	Print(par);

}