#include <iostream>
#include <vector>
#define lli long long int
int main()
{
    int n, m;
    lli set[1000];
    int counter = 1;
    while (std::cin >> n)
    {
        std::cout << "Case " << counter << ":\n";
        for (int i = 0; i < n; i++)
        {
            std::cin >> set[i];
        }
        std::cin >> m;
        if (m > 0)
        {
            for (int q = 0; q < m; q++)
            {
                lli query;
                std::cin >> query;
                lli sum = set[0] + set[1];
                for (int i = 0; i < n; i++)
                {
                    for (int j = i + 1; j < n; j++)
                    {
                        lli res = set[i] + set[j];
                        if (abs(res - query) < abs(sum - query))
                        {
                            sum = res;
                        }
                    }
                }
                std::cout << "Closest sum to " << query << " is " << sum << ".\n";
            }
        }
        counter++;
    }
    return 0;
}