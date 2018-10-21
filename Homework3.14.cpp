#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	int a, b, c;
	double  x1, x2, D;
	cout << "Введите коэффициенты: ";
	cin >> a >> b >> c;
	D = b * b - 4 * a * c;
	if (D > 0) {
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		if(x1 < x2) cout << x1 << " " << x2;
		else cout << x2 << " " << x1;
	}
	else {
		if (D == 0) cout << (-b) / (2 * a);
	}
}