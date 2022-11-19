#include <iostream>
#include <vector>
#include <string>
int D;
std::vector<std::string> braille = {
    ".***..", "*.....", "*.*...", "**....", "**.*..", "*..*..", "***...", "****..", "*.**..", ".**..."};
void to_braille(std::string message)
{
    for (int i = 0; i < message.size(); i++)
    {
        if (i)
            std::cout << " ";
        int index = message[i] - '0';
        std::cout << braille[index][0] << braille[index][1];
    }
    std::cout << "\n";
    for (int j = 0; j < message.size(); j++)
    {
        if (j)
            std::cout << ' ';
        int ind = message[j] - '0';
        std::cout << braille[ind][2] << braille[ind][3];
    }
    std::cout << '\n';
    for (int j = 0; j < message.size(); j++)
    {
        if (j)
            std::cout << ' ';
        std::cout << '.' << '.';
    }
    std::cout << '\n';
}
void from_braille()
{
    std::vector<std::string> path(4);
    for (int i = 0; i < 4; i++)
    {
        std::getline(std::cin, path[i]);
    }
    for (int i = 0; i < D * 3 - 1; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (path[1].substr(i, 2) == braille[j].substr(0, 2) && path[2].substr(i, 2) == braille[j].substr(2, 2))
            {
                std::cout << (char)(j + '0');
                break;
            }
        }
    }
    std::cout << "\n";
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    while (true)
    {
        std::cin >> D;
        if (D == 0)
            break;
        char func;
        std::cin >> func;
        if (func == 'S')
        {
            std::string message;
            std::cin >> message;
            to_braille(message);
        }
        else if (func == 'B')
        {
            from_braille();
        }
    }
    return 0;
}