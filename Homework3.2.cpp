#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	int arr[1000];
	int a;
	cout << "Количество элементов: ";
	cin >> a;
	cout << endl << "Массив: ";
	for (int i = 0; i < a; i++) { 
		cin >> arr[i];
		if (i > 0) {
			if (((arr[i] >= 0) && (arr[i - 1] >= 0)) || ((arr[i] < 0) && (arr[i - 1] < 0))) {
				if (arr[i] >= arr[i - 1]) {
					cout << arr[i - 1] << " " << arr[i];
					break;
				}
				else {
					cout << arr[i] << " " << arr[i - 1];
					break;
				}
			}
		}
	}

}