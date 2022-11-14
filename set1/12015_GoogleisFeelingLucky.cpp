#include <iostream>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int max = 0;
        std::vector<std::pair<std::string, int>> websites;
        for (int j = 0; j < 10; j++)
        {
            std::string website;
            std::cin >> website;
            int val;
            std::cin >> val;
            std::pair<std::string, int> caso;
            caso.first = website;
            caso.second = val;
            websites.push_back(caso);
            if (val > max)
            {
                max = val;
            }
        }
        std::cout << "Case #" << i << ":\n";
        for (int i = 0; i < 10; i++)
        {
            if (websites[i].second == max)
            {
                std::cout << websites[i].first << "\n";
            }
        }
    }
}