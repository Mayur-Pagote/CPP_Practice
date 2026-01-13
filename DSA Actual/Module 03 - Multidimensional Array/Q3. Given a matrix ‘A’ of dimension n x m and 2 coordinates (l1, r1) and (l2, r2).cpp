#include <iostream>
using namespace std;


int main () {
    int rows;
    cout<<"Enter rows: ";
    cin>>rows;

    int cols;
    cout<<"Enter cols: ";
    cin>>cols;

    int arr[rows][cols];
    for (int i = 0 ; i < rows; i++){
        for (int j = 0 ; j < cols;j++){
            cin>>arr[i][j];
        }
    }

    int l1 , l2, r1, r2;
    cin>>l1;
    cin>>r1;
    cin>>l2;
    cin>>r2;

    int sumTotal = 0;
    if (l1 > l2) swap(l1, l2);
    if (r1 > r2) swap(r1, r2);
    for (int i = l1; i <= l2; i++){
        for (int j = r1; j <= r2; j++){
            sumTotal += arr[i][j];
        }
    }

    cout<<sumTotal;
    

}
