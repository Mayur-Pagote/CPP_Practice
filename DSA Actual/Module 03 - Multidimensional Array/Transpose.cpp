#include <iostream>
#include <vector>
using namespace std;

int main () {

    int row, col;
    cout<<"Enter rows: ";
    cin>>row;

    cout<<"Enter columns: ";
    cin>>col;
    int arr[row][col];
    int tra[col][row];
    for(int i = 0 ; i < row ; i++){
        for(int j = 0; j < col ; j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0 ; i < col ; i++){
        for(int j = 0; j < row ; j++){
            tra[i][j] = arr[j][i];
        }
    }

    for(int i = 0 ; i < col ; i++){
        for(int j = 0; j < row ; j++){
            cout<<tra[i][j]<<" ";
        }
        cout<<endl;
    }

}
