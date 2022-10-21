#include <iostream>
#include <vector>

using namespace std;
void update(std::vector<long long> &tree, long long index, long long value, long long n)
{
    index++;
    while (index < n + 5)
    {
        tree[index] += value;
        index += index & (-index);
    }
}

long long sum(std::vector<long long> &tree, long long index)
{
    long long total = tree[0];
    while (index > 0)
    {
        total += tree[index];
        index -= index & (-index);
    }
    return total;
}

int main()
{
    ios::sync_with_stdio(false);
    long long n, q;
    std::vector<long long> fenwick(5000005, 0);
    scanf("%lld%lld\n", &n, &q);

    long long index, value;
    for (long long i = 0; i < q; i++)
    {
        char op;
        scanf("%c", &op);

        if (op == '+')
        {
            scanf("%lld%lld\n", &index, &value);
            update(fenwick, index, value, n);
        }
        if (op == '?')
        {
            scanf("%lld\n", &index);
            printf("%lld\n", sum(fenwick, index));
        }
    }
}