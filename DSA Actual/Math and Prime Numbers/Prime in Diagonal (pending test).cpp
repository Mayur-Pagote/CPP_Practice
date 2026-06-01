#include <iostream>
#include <vector>
using namespace std;

int check_prime(int n)
{
    if (n < 2)
        return -1;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return -1;
    }

    return n;
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> nums(n, vector<int>(n));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> nums[i][j];

    int max_prime = -1;

    for (int i = 0; i < n; i++)
    {
        max_prime = max(max_prime, check_prime(nums[i][i]));
        max_prime = max(max_prime, check_prime(nums[i][n - i - 1]));
    }

    cout << max_prime;
}
