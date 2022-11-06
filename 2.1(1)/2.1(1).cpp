// Lab_02.cpp
// < Яворського Богдана >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 31
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
	double Pi = 4 * atan(1.); // число пі

	double a; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	cout << "a = "; cin >> a;
	z1 = (1 - 2 * pow(sin(a), 2)) / (1 + sin(2 * a));
	z2 = (1 - tan(a)) / (1 + tan(a));
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}