#include <iostream>
using namespace std;

int main() {
    int row, col;

    cout << "Enter rows of matrix one: ";
    cin >> row;

    cout << "Enter cols of matrix one: ";
    cin >> col;

    int mat1[row][col];
    
    cout << "Enter elements in matrix 1:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> mat1[i][j];
        }
    }

    int top = 0, bottom = row-1, left = 0, right = col-1;

    while (top<=bottom && left<=right){
        for (int i = left; i <= right; i++){
            cout<<mat1[top][i]<<" ";
        }
        top += 1;

        for (int j = top ; j <= bottom; j++){
            cout<<mat1[j][right]<<" ";
        }
        right -= 1;

        for (int k = right; k >= left; k--){
            cout<<mat1[bottom][k]<<" ";
        }
        bottom -= 1;

        for (int l = bottom; l >= top; l--){
            cout<<mat1[l][left]<<" ";
        }
        left += 1;
    }
}
