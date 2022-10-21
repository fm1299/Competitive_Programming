#include <vector>
#include <iostream>
#define ll long long int
#define vi std::vector<int>
#define vv std::vector<vi>
#define vll std::vector<ll>
using std::cin, std::cout, std::endl;
void update(vv &matrix, int i, int j, int value, int n)
{
    while (j <= n)
    {
        matrix[i][j] += value;
        j += ((i) & (-(i)));
    }
}
void init(vv &mat, int n, std::string &query)
{
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (int(query[j]) - '0' == i)
            {
                update(mat, i, j, 1, n);
            }
        }
    }
}
int sum(vv mat, int i, int j)
{
    int suma = 0;
    while (j > 0)
    {
        suma += mat[i][j];
        j -= ((j) & (-(j)));
    }
    return suma;
}

int sum(vv mat, int k, int i, int j)
{
    return (sum(mat, k, j) - sum(mat, k, i - 1));
}
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vi fenwick(200000 + 1, 0);
    vv matrix(7, fenwick);
    int n, m;
    std::string queries;
    cin >> n >> m;
    vll gem_values(7, 0);
    for (int i = 1; i <= 6; ++i)
    {
        cin >> gem_values[i];
    }
    std::string temp;
    cin >> temp;
    queries = " " + temp;
    init(matrix, n, queries);
    while (m--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int k, p;
            cin >> k >> p;
            update(matrix, int(queries[k]) - '0', k, -1, n);
            update(matrix, p, k, 1, n);
            queries[k] = char(p) + '0';
        }
        else if (op == 2)
        {
            int p;
            ll v;
            cin >> p >> v;
            gem_values[p] = v;
        }
        else if (op == 3)
        {
            int left, right;
            cin >> left >> right;
            ll total = 0;
            for (int i = 1; i <= 6; ++i)
            {
                total += sum(matrix, i, left, right) * gem_values[i];
            }
            cout << total << endl;
        }
    }
    return 0;
}