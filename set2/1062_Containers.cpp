#include <cstdio>
#include <iostream>
#include <vector>
#include <stack>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cout.tie(NULL);
    bool push;
    char chain[1001];
    int k;
    int cases = 1;
    std::vector<std::stack<char>> containers;
    while (scanf("%s", chain), chain[0] != 'e')
    {
        k = 0;
        while (chain[k])
        {
            push = false;
            for (auto &s : containers)
            {
                if (s.top() >= chain[k])
                {
                    push = true;
                    s.push(chain[k]);
                    break;
                }
            }

            if (!push)
            {
                containers.push_back(std::stack<char>());
                containers.back().push(chain[k]);
            }
            k++;
        }
        std::cout << "Case " << cases << ": " << containers.size() << std::endl;
        cases++;
        containers.clear();
    }
    return 0;
}