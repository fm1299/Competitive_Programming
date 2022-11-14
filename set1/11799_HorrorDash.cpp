#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int t;
    std::cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int max = 0;
        int n;
        std::cin >> n;
        while (n--)
        {
            int num;
            std::cin >> num;
            max = (num > max) ? num : max;
        }
        std::cout << "Case " << i << ": " << max << "\n";
    }
}