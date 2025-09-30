#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
// #include <windows.h>


using namespace std;

int main()
{
	setlocale(0, "");
	// SetConsoleCP(1251);
	// SetConsoleOutputCP(1251);

	int k = 0, ch = 0;
	string n;
	cout << "Введите число: ";
	cin >> n;
	cout << "Для отказа от ввода введите: Отказ" << endl;

	while (n != "Отказ")
	{
		if (n[n.length() - 1] == '2' || n[n.length() - 1] == '4' || n[n.length() - 1] == '6' || n[n.length() - 1] == '8' || n[n.length() - 1] == '0')
			ch++;

		cout << "Введите число: ";
		cin >> n;

		k++;
	}
	cout << "Всего чисел: " << k << "\nЧётных чисел: " << ch;
}

