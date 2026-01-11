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

    for(int i = row-1 ; i >= 0 ; i--){
        if (i % 2 == 0 ){
            for(int j = 0; j < col; j++) cout<<mat1[i][j]<<" ";
            
        }
        else {
            for (int j = col-1; j >= 0; j--) cout<<mat1[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
