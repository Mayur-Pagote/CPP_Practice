#include <iostream>
using namespace std;


int main () {
    int n;
    cin>>n;
    int arr[n][n];
    for(int i = 0 ; i<n; i++){
        for (int j = 0 ; j < n ;j++){
            cin>>arr[i][j];
        }
    }

    int l = 0, m = n-1;

    for(int i = 0 ; i<n; i++){
        for (int j = 0 ; j < n ;j++){
            if (i+j == n-1 || i == j){
                cout<<arr[i][j];
            }
            else cout<<" ";
        }
        cout<<endl;
    }
    

    
}
