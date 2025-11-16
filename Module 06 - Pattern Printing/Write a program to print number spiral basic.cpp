#include <iostream>
using namespace std;

int main() {
    // Write a program to print number spiral basic.
    int num; 
    cin >> num;
    
    for (int i = 1; i<=num; i++){
        for ( int j = 1; j<=num; j++) cout<<min(i,j);
        
        for ( int k = num-1; k>=1; k--) cout<<min(i,k);
        cout<<endl;
        
    }

    for (int i = num-1; i>=1; i--){
        for ( int j = 1; j<=num; j++) cout<<min(i,j);
        
        for ( int k = num-1; k>=1; k--) cout<<min(i,k);
        cout<<endl;
        
    }

    return 0;
}
