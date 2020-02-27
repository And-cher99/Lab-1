#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int* Arr;
	int* Arr2;
	int num, a, b, n, n2, k, j = 0;
	cout << "Введите a: "; cin >> a;
	cout << "Введите b>=:a "; cin >> b;
	cout << "Введите n: "; cin >> n;
	n2 = n;
	Arr = new int[n]; // динамический массив
	for (int i = 0; i < n; i++)
	{
		num = rand() % (b - a + 1) + a;
		Arr[i] = num;
	}
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
	cout << "Введите k: ";
	cin >> k;
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] < k)
		{
			n2--;
		}
	}
	Arr2 = new int[n2]; // динамический массив 2
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] > k)
		{
			Arr2[j] = Arr[i];
			j++;
		}
	}
	for (int i = 0; i < n2; i++)
	{
		cout << Arr2[i] << " ";
	}
	system("pause");

	return 0;
}

