#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int t;
    std::cin >> t;
    while (t--)
    {
        long long a, b;
        std::cin >> a >> b;
        if (a > b)
        {
            printf("%s", ">\n");
        }
        if (a < b)
        {
            printf("%s", "<\n");
        }
        if (a == b)
        {
            printf("%s", "=\n");
        }
    }
}