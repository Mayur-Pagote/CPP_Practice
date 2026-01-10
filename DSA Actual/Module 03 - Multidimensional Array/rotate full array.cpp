#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        int j = 0;
        int end = n - 1;
        while (j < end)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][end];
            arr[i][end] = temp;
            j++;
            end--;
        }
    }
}
