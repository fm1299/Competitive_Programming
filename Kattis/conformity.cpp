#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;

    while (cin >> n && n)
    {

        int popularity = 0;

        map<vector<int>, int> frosh;
        vector<int> arr(5);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cin >> arr[j];
            }

            sort(arr.begin(), arr.end());

            if (frosh.count(arr))
            {
                frosh[arr]++;
            }
            else
            {
                frosh[arr] = 1;
            }
        }

        map<vector<int>, int>::iterator i;
        bool all_popular = false;
        for (i = frosh.begin(); i != frosh.end(); ++i)
        {
            if (i->second == popularity)
            {
                all_popular = true;
            }
            else if ((i->second) > popularity)
            {
                popularity = i->second;
                all_popular = false;
            }
        }
        if (all_popular)
        {
            int cont = 0;

            for (i = frosh.begin(); i != frosh.end(); ++i)
            {
                if ((i->second) == popularity)
                    cont++;
            }
            popularity = popularity * cont;
        }
        cout << popularity << std::endl;
        frosh.clear();
    }

    return 0;
}