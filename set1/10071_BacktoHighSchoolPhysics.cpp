#include <iostream>

int main()
{
    int v, t;
    int d;
    while (std::cin >> v >> t)
    {
        d = 2 * t * v;
        std::cout << d << std::endl;
    }
    return 0;
}