#include <iostream>
#include <algorithm>
using namespace std;



int main () {
    int n;
    cin>>n;

    int arr[n][n];

    int top = 0 , bottom = n-1, left = 0, right = n-1;
    int num = 1;
    while (top <= bottom && left <= right){
        for (int i = left; i<=right; i++){
            arr[top][i] = num;
            num += 1;
        }
        top += 1;

        for (int j = top; j<=bottom; j++){
            arr[j][right] = num;
            num += 1;
        }
        right -=1;

        if (top <= bottom){
            for (int k = right; k >= left; k--){
                arr[bottom][k] = num;
                num+=1;
            }
            bottom -= 1;
        }

        if (left <= right){
            for (int l = bottom; l >= top; l--){
                arr[l][left] = num;
                num += 1;
            }
            left += 1;
        }
    }

    for (int i = 0; i<n;i++){
        for (int j = 0 ; j < n; j++){
            cout<<arr[i][j]<<" ";
        }
    }
}
