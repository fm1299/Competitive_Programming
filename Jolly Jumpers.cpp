#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
bool is_jolly(bool a[], int n)
{
    while (--n)
    {
        if (!a[n])
            return 0;
    }
    return 1;
}
int main()
{
    int n, a, b;
    bool diffset[3000];
    while (scanf("%d", &n) != EOF)
    {
        memset(diffset, 0, sizeof(bool) * n);
        std::cin >> a;
        for (int i = 1; i < n; ++i)
        {
            std::cin >> b;
            a = std::abs(a - b);
            if (a < n)
            {
                diffset[a] = 1;
            }
            a = b;
        }
        if (is_jolly(diffset, n))
        {
            printf("jolly\n");
        }
        else
        {
            printf("Not jolly\n");
        }
    }
    return 0;
}