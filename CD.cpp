#include <iostream>
#include <vector>
int main()
{
    std::vector<int> Jack;
    int n, m;
    std::cin >> n >> m;
    int counter = 0;
    int val1;
    int val2;
    for (int i = 0; i < n; i++)
    {
        std::cin >> val1;
        Jack.push_back(val1);
    }
    for (int j = 0; j < m; j++)
    {
        std::cin >> val2;
    }
    Jack.clear();
    std::cin >> n >> m;
    std::cout << counter << std::endl;
}