#include <iostream>

int main()
{
    int n;
    std::cout << "Введите n: ";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            if ((i+k)%2==0)
                std::cout<<0;
            else
                std::cout<<8;
        }
        std::cout << "\n";
    }
    
}