// Homework.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <cmath>
#include <stdlib.h>

using namespace std;

int f(int n);//N-ное число последовательности Фибоначчи

int main()
{

	setlocale(LC_ALL, "RUSSIAN");
	cout << "Введите число : ";
	int a;
	cin >> a;
	cout << f(a - 1);
}
int f(int n) {
	int a = 0, b = 1, c;
	for (int i = 0; i <= n - 2; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	return (c);
}

