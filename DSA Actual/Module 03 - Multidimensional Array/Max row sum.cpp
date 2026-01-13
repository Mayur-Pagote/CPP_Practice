#include <iostream>
using namespace std;

int main () {
    int rows, cols;
    cin >> rows >> cols;

    int arr[rows][cols];

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cin >> arr[i][j];
        }
    }

    int maxRow = 0;
    int maxSum = 0;

    // Initialize maxSum with first row sum
    maxSum = 0;
    for(int j = 0; j < cols; j++){
        maxSum += arr[0][j];
    }

    for (int i = 1; i < rows; i++){
        int tempSum = 0;
        for (int j = 0; j < cols; j++){
            tempSum += arr[i][j];
        }
        if (tempSum > maxSum) {
            maxSum = tempSum;
            maxRow = i;
        }
    }

    cout << maxRow << " " << maxSum;
}
