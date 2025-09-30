

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(0, "");

	double x, cox = 0, sqx = 0;
	int n;

	cout << "Введите x, n: ";
	cin >> x >> n;

	while (n > 0)
	{
		n--;
		cox = cos(x + cox);
		sqx = sqrt(x + sqx);
	}

	cout << "Ответ: " << "\na) " << cox << "\nb) " << sqx;
}

