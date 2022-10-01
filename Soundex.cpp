#include <iostream>
#include <string>
bool find1(char array[], char character, int n = 4)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == character)
        {
            return true;
        }
    }
    return false;
}
bool find2(char array[], char character, int n = 8)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == character)
        {
            return true;
        }
    }
    return false;
}
bool find3(char array[], char character, int n = 2)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == character)
        {
            return true;
        }
    }
    return false;
}
bool find4(char array[], char character, int n = 1)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == character)
        {
            return true;
        }
    }
    return false;
}
bool find5(char array[], char character, int n = 2)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == character)
        {
            return true;
        }
    }
    return false;
}
bool find6(char array[], char character, int n = 1)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == character)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    char array1[4] = {'B', 'F', 'P', 'V'};
    char array2[8] = {'C', 'G', 'J', 'K', 'Q', 'S', 'X', 'Z'};
    char array3[2] = {'D', 'T'};
    char array4[1] = {'L'};
    char array5[2] = {'M', 'N'};
    char array6[1] = {'R'};

    std::string word;

    while (std::cin >> word)
    {
        std::string output;
        for (int i = 0; i < word.size(); i++)
        {
            if (word[i] != 'A' || word[i] != 'E' || word[i] != 'I' || word[i] != 'O' || word[i] != 'U' || word[i] != 'H' || word[i] != 'W' || word[i] != 'Y')
            {
                if ((word[i - 1]) != word[i])
                {
                    if (find1(array1, word[i]))
                    {
                        if (!find1(array1, word[i - 1]))
                        {
                            output += '1';
                        }
                    }
                    if (find2(array2, word[i]))
                    {
                        if (!find2(array2, word[i - 1]))
                        {
                            output += '2';
                        }
                    }
                    if (find3(array3, word[i]))
                    {
                        if (!find3(array3, word[i - 1]))
                        {
                            output += '3';
                        }
                    }
                    if (find4(array4, word[i]))
                    {
                        if (!find4(array4, word[i - 1]))
                        {
                            output += '4';
                        }
                    }
                    if (find5(array5, word[i]))
                    {
                        if (!find5(array5, word[i - 1]))
                        {
                            output += '5';
                        }
                    }
                    if (find6(array6, word[i]))
                    {
                        if (!find6(array6, word[i - 1]))
                        {
                            output += '6';
                        }
                    }
                }
            }
        }
        std::cout << output << std::endl;
    }
}