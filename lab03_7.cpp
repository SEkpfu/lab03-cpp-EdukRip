#include <iostream>
#include <cmath>

int main()
{
    int n;
    std::cout << "Введите количество сторон треугольника: ";
    std::cin >> n;

    double x1, y1, x, y;
    std::cout << "Введите координаты для " << 1 << " угла: ";
    std::cin >> x1 >> y1;
    x = x1;
    y = y1;
    double x2, y2, P = 0;

    for (int i = 1; i < n; i++)
    {
        std::cout << "Введите координаты для " << i+1 << " угла: ";
        std::cin >> x2 >> y2;

        P += sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

        x1 = x2;
        y1 = y2;

    }
    P += sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));

    std::cout << P;
}