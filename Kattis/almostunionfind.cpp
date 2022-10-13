#include <iostream>
#include <list>
#include <vector>
#include <string>
void init_list(int n, std::list<std::vector<int>> &l)
{
    for (int i = 1; i <= n; i++)
    {
        l.push_back(std::vector<int>{i});
    }
}
void operation1(int p, int q)
{
}
void operation2()
{
}
void operation3()
{
}
int main()
{
    std::list<std::vector<int>> test;
    std::list<std::vector<int>>::iterator it = test.begin();
    int n, m;
    while (scanf("%d %d", &n, &m) == 2)
    {
        init_list(n, test);
        std::string commands;
        int c = 0;
        for (int i = 1; i <= m; i++)
        {
            std::getline(std::cin, commands);
            c = std::count(commands.begin(), commands.end(), ' ');
            std::remove(commands.begin(), commands.end(), ' ');
            commands.resize(commands.length() - 2);
            int value = commands[0] - '0';
            if (value == 1)
            {
                operation1(commands[1] - '0', commands[2] - '0');
            }
            else if (value == 2)
            {
                operation2();
            }
            else if (value == 3)
            {
                operation3();
            }
        }
    }
    return 0;
}