#include <iostream>
#include <algorithm>
#include <vector>
int main()
{
    int n, m;
    while (std::cin >> n >> m, (n || m))
    {
        int counter = 0;
        std::vector<int> Jack;
        std::vector<int> Jill;
        for (int i = 0; i < n; i++)
        {
            int val1;
            std::cin >> val1;
            Jack.push_back(val1);
        }
        std::vector<int>::iterator it = Jack.begin();
        for (int i = 0; i < m; i++)
        {
            int cd;
            std::cin >> cd;
            while (it != Jack.end())
            {
                if (*it < cd)
                {
                    it++;
                }
                else if (*it == cd)
                {
                    counter++;
                    it++;
                    break;
                }
                else
                {
                    break;
                }
            }
        }
        std::cout << counter << std::endl;
    }
}