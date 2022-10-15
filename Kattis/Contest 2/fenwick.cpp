#include <iostream>
int get_sum(long long int *&tree, long long int index)
{
    long long int sum = 0;
    index += 1;
    while (index > 0)
    {
        sum += tree[--index];
        index -= index & (-index);
    }
    return sum;
}
void index_increment(long long int *&tree, int n, long long int index, long long int value)
{
    index = index + 1;
    while (index <= n)
    {

        tree[index] += value;

        index += index & (-index);
    }
}
void init(long long int *&tree, int n)
{
    tree = new long long int[n + 1];
    for (int i = 1; i <= n; i++)
    {
        tree[i] = 0;
    }
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    long long int n, n_operations;
    std::cin >> n >> n_operations;
    long long int *fTree;
    init(fTree, n);
    char op;
    int num1 = 0, num2 = 0;
    for (long long int i = 0; i < n_operations; i++)
    {
        std::cin >> op;
        if (op == '+')
        {
            std::cin >> num1 >> num2;
            index_increment(fTree, n, num1, num2);
        }
        else if (op == '?')
        {
            std::cin >> num1;
            std::cout << get_sum(fTree, num1) << std::endl;
        }
    }
    return 0;
}