#include <vector>
#include <map>
#include <set>
#include <iostream>
#define ll long long int
#define vi vector<int>
#define vvi vector<vi>
#define vll vector<ll>
#define LSOne(i) ((i) & (-(i)))
using namespace std;

int large = 200000;

vi FT(large + 1, 0);
vvi res(7, FT);
vll gems(7);

int n, m;
string query;

void update(int i, int j, int v)
{
    while (j <= n)
    {
        res[i][j] += v;
        j += LSOne(j);
    }
}

void ini()
{
    for (int i = 1; i <= 6; ++i)
    {
        for (int j = 1; j <= n; ++j)
            if (int(query[j]) - '0' == i)
                update(i, j, 1);
    }
}

int rsq(int i, int j)
{
    int suma = 0;
    while (j > 0)
    {
        suma += res[i][j];
        j -= LSOne(j);
    }
    return suma;
}

int rsq(int k, int i, int j)
{
    return rsq(k, j) - rsq(k, i - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n >> m;
    for (int i = 1; i <= 6; ++i)
        cin >> gems[i];
    string tmp;
    cin >> tmp;
    query = " " + tmp;
    ini();
    while (m--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int k, p;
            cin >> k >> p;
            update(int(query[k]) - '0', k, -1);
            update(p, k, 1);
            query[k] = char(p) + '0';
        }
        else if (op == 2)
        {
            int p;
            ll v;
            cin >> p >> v;
            gems[p] = v;
        }
        else
        {
            int l, r;
            cin >> l >> r;
            ll sum = 0;
            for (int i = 1; i <= 6; ++i)
                sum += rsq(i, l, r) * gems[i];
            cout << sum << '\n';
        }
    }
}