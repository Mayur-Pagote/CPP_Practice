#include <iostream>
#include <algorithm>
using namespace std;



int main () {
    int rows;
    cin>>rows;

    int cols;
    cin>>cols;

    int arr[rows][cols];

    for (int i = 0 ; i < rows ; i++){
        for (int  j = 0 ; j <  cols ;j++){
            cin>>arr[i][j];
        }
    }
    
    for (int i = 0 ; i < rows ; i++){
        for (int  j =  0; j <  i ;j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

    int  st = 0, ed = rows-1;

    for (int i = 0; i < rows/2; i++) {
    for (int j = 0; j < cols; j++) {
        swap(arr[i][j], arr[rows-1-i][j]);
    }
}


    for (int i = 0 ; i < rows ; i++){
        for (int  j =  0; j <  cols ;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
