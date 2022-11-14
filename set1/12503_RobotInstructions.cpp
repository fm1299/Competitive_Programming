#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> instructions;
        int position = 0;
        while (n--)
        {
            string instruction;
            cin >> instruction;
            if (instruction == "LEFT")
            {
                --position;
                instructions.push_back(-1);
            }
            else if (instruction == "RIGHT")
            {
                ++position;
                instructions.push_back(1);
            }
            else
            {
                int i;
                cin >> instruction >> i;
                position += instructions[i - 1];
                instructions.push_back(instructions[i - 1]);
            }
        }
        cout << position << endl;
    }
    return 0;
}