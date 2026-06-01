#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>

using namespace std;

int check_prime(int n)
{
    if (n == 1)
        return 0;

    for (int i = 2; i <= (int)sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }

    return n;
}

int main()
{
    int row, col;
    cin >> row >> col;

    vector<vector<int>> nums(row, vector<int>(col));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> nums[i][j];
        }
    }

    int max_prime = 0;

    int last_col = col - 1;
    int count = 0;

    for (int i = 0; i < row; i++)
    {
        max_prime = max(max_prime, check_prime(nums[i][count]));
        max_prime = max(max_prime, check_prime(nums[i][last_col - count]));
        count++;
    }

    cout << max_prime << endl;

    return 0;
}
