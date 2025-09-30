

#include <iostream>


using namespace std;


int main()
{
    setlocale(0, "");

    double tC = 0, tF;

    while (tC <= 100)
    {
        tF = 1.8 * tC + 32;
        cout << tC << "°C, " << tF << "F" << endl;

        tC += 10;
    }
}

