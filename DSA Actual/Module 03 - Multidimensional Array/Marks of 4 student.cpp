#include <iostream>
#include <vector>
using namespace std;



int main () {
    int row;
    cout<<"Enter total students: ";
    cin>>row;
    int col;
    cout<<"Enter total subjects: ";
    cin>>col;

    int arr[row][col];
    
    for (int i = 0 ; i < row; i++){
        cout<<"Marks of roll number "<<i<<" : ";
        for(int j = 0 ; j < col; j++){

            cin>>arr[i][j];
        }
    }

    for (int i = 0 ; i < row; i++){
        for(int j = 0 ; j < col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

  


}
