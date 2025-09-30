#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>


using namespace std;


int main()
{
    setlocale(0, "");
    double y;
    for (double i = -1.5; i <= 1.5; i += 0.25)
    {
        if (i > 1)
            y = 1 + sqrt(abs(cos(i)));
        else if (i >= -0.5)
            y = i + 1;
        else
            y = 1 - i * i;
        cout << i << ", y = " << y << endl;
    }
}

