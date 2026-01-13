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

    int temp = n/2 ;

    for (int  i = 0 ; i < n ; i++){
        for (int  j = 0  ; j < n ;j++){
            if (i == temp || j == temp){
                cout<<arr[i][j];
            }
            else cout<<" ";
        }
        cout<<endl;
    }

    
}
