// Homework.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <cmath>
#include <stdlib.h>

using namespace std;

int st(int n, int m);//Функция возведения в степень

int main()
{

	setlocale(LC_ALL, "RUSSIAN");
	int a, b = 0, c = 0, v = 0, s = 0;
	cout << "Введите число: ";
	cin >> a;
	v = a;
	if (a < 0) b = a * (-1);
	else b = a;
	do {
		b = b / 10;
		c++;
	} while (b > 0);
	b = 0;
	if (a < 0) s = a * (-1);
	else s = a;
	for (int i = 0; s > 0; i++) {
		b = b + ((s % 10) * st(10,c - i - 1));
		s = s / 10;
	}
	if (v < 0) cout << (b * (-1));
	else cout << b;
}
int st(int n, int m) {
	int a = 1;
	for (int i = 0; i < m; i++) {
		a = a * n;
	}
	return a;
}

