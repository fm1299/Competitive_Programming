#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;
typedef long long ll;
struct doll
{
    ll width;
    ll height;
};
bool comparar(const doll &d1, const doll &d2)
{
    return d1.width == d2.width ? d1.height > d2.height : d1.width < d2.width;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        vector<doll> dolls(m);
        for (int i = 0; i < m; i++)
        {
            cin >> dolls[i].width >> dolls[i].height;
        }
        sort(dolls.begin(), dolls.end(), comparar);
        int k = 0;
        deque<int> ord;
        for (int i = 0; i < m; i++)
        {
            int pos = lower_bound(ord.begin(), ord.end(), dolls[i].height) - ord.begin();
            if (pos == 0)
            {
                ord.push_front(dolls[i].height);
            }
            else
            {
                ord[pos - 1] = dolls[i].height;
            }
        }
        cout << ord.size() << endl;
    }
    return 0;
}