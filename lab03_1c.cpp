#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>


using namespace std;


int main()
{
    setlocale(0, "");

    for (double i = 0; i <= 2 * M_PI; i += M_PI / 6)
    {
        cout << i << ", y = " << cos(i) << endl; //Тут 2pi не то выводит
    }

    for (double i = 0; i <= 12; i++)
    {
        cout << i << ", y = " << cos(i * M_PI / 6) << endl; //Тут работает нормально
    }
}

