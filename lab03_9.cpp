#include <iostream>

int main()
{
    int n = 1, maxn = 0, numn = 0;
    while (n != 0)
    {
        std::cin >> n;
        if (maxn < n)
        {
            maxn = n;
            numn = 0;
        }
        if (maxn == n)
        {
            numn += 1;
        }
    }
    std::cout << "Количество наибольших чисел: " << numn;
}