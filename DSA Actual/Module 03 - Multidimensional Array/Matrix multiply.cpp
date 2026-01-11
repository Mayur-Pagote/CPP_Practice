#include <iostream>
using namespace std;

int main() {
    int row, col, col2;

    cout << "Enter rows of matrix one: ";
    cin >> row;

    cout << "Enter cols of matrix one: ";
    cin >> col;

    cout << "Enter columns of matrix two: ";
    cin >> col2;

    // Matrix declarations
    int mat1[row][col];
    int mat2[col][col2];
    int res[row][col2];

    cout << "Enter elements in matrix 1:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter elements in matrix 2:\n";
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < col2; j++) {
            cin >> mat2[i][j];
        }
    }

    // Matrix multiplication
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col2; j++) {
            res[i][j] = 0; // initialize
            for (int k = 0; k < col; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout << "Result matrix:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col2; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
