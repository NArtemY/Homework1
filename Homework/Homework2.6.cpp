// Homework.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <cmath>

using namespace std;

int main()
{

	setlocale(LC_ALL, "RUSSIAN");
	int a, b, c, d;
	cout << "Координаты начала";
	cin >> a >> b;
	cout << "Координаты конца";
	cin >> c >> d;
	if ((a == c) || (b == d)) cout << "YES";
	else cout << "NO";
}
