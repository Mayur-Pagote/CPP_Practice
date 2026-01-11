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

    for(int i = 0 ; i < row ; i++){
        if (i % 2 == 0 ){
            for(int j = 0; j < col; j++) cout<<mat1[j][i]<<" ";
            
        }
        else {
            for (int j = col-1; j >= 0; j--) cout<<mat1[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
