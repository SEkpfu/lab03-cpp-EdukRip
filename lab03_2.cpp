#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>



using namespace std;


int main()
{
    setlocale(0, "");
    
    int a;
    int she = 0, sum = 0, mik;

    bool f = true;

    for (int i = 0; i < 7; i++)
    {
        cin >> a;

        if (a < 0)
            she++;
        if (a % 100 == a && a > 9)
            sum += a;
        if (f)
        {
            mik = a; f = false;
        }
        if (a < mik)
            mik = a;

    }
    cout << "количество отрицательных чисел: " << she << endl;
    cout << "сумма двузначных чисел: " << sum << endl;
    cout << "наименьшее: " << mik;

}

