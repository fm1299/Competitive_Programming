#include <iostream>
#include <vector>
std::vector<int> digits(10);
int repeatedDigits(int n)
{
    int dig;
    std::fill(digits.begin(), digits.end(), 0);
    while (n)
    {
        dig = n % 10;
        n /= 10;

        if (digits[dig])
            return 0;
        digits[dig] = 1;
    }
    return 1;
}
int main()
{
    int n, m;
    int total;
    while (std::cin >> n >> m)
    {
        total = 0;
        while (n <= m)
        {
            total += repeatedDigits(n++);
        }
        std::cout << total << std::endl;
    }
    return 0;
}