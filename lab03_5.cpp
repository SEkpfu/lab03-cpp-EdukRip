#define _USE_MATH_DEFINES 
#include <iostream>
#include <cmath>

int main()
{
    double eps;
    std::cin >> eps;
    double s{0};

    for (int i{1}, z = 1; 1.0/i > eps ;i+= 2, z = -z)
    {
        s+= z*1.0/i;
    }
    std::cout << "Ответ: " << s << std::endl;
    std::cout << M_PI/4;
}