#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	string arr[1000];
	int n, b, k, l, r;
	cout << "Количество кеглей: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		arr[i] = "I";
	}
	cout << "Количество шаров: ";
	cin >> k;
	for (int i = 0; i < k; i++) {
		cout << "l, r: ";
		cin >> l >> r;
		for (int m = l - 1; m < r; m++) {
			arr[m] = ".";
		}
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i];
	}
}