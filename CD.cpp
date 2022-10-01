#include <iostream>
#include <vector>
bool compare(std::vector<int> array, int value)
{
    for (int i = 0; i < array.size(); i++)
    {
        if (array[i] == value)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    std::vector<int> Jack;
    int n, m;
    std::cin >> n >> m;
    int counter = 0;
    int val1;
    int val2;
    while (n != 0 && m != 0)
    {
        for (int i = 0; i < n; i++)
        {
            std::cin >> val1;
            Jack.push_back(val1);
        }
        for (int j = 0; j < m; j++)
        {
            std::cin >> val2;
            if (compare(Jack, val2))
            {
                counter++;
            }
        }
        std::cin >> n >> m;
    }
    std::cout << counter << std::endl;
}