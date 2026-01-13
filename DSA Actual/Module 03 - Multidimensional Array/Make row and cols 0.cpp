#include <iostream>
#include<vector>
using namespace std;


int main () {
    vector<int> arr1;
    vector<int> arr2;

    int rows;
    cin>>rows;

    int cols;
    cin>>cols;
    int arr[rows][cols];
    for(int i =0 ; i< rows; i++){
        for (int j =0; j < cols; j++){
            cin>>arr[i][j];
        }
    }

    for(int i =0 ; i< rows; i++){
        for (int j =0; j < cols; j++){
            if (arr[i][j] == 0){
                arr1.push_back(i);
                arr2.push_back(j);
            }
        }
    }
    for (int r : arr1){
        for (int j = 0 ; j < cols ;j++){
            arr[r][j] = 0;
        }
    }

    for (int r : arr2){
        for (int j = 0 ; j < rows ;j++){
            arr[j][r] = 0;
        }
    }
    for(int i =0 ; i< rows; i++){
        for (int j =0; j < cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
