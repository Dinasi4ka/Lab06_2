// Lab06_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int n, const int Low, const int High)
{
	for (int i = 0; i < n; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
int Min(int* a, const int size)
{
	int min = a[0];
	int imin = 0;
	for (int i = 1; i < size; i++)
		if (a[i] < min && a[i] % 2 !=0)
		{
			min = a[i];
			imin = i;
		}
	return imin;
}
int main()
{
	srand((unsigned)time(NULL));

	const int n = 10;
	int a[n];

	int Low = -50;
	int High = 50 ;


	Create(a, n, Low, High);
	Print(a, n);

	cout << "imin =" << Min(a, n);

	return 0;
}


