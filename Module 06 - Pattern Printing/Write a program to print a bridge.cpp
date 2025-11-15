#include <iostream>
using namespace std;

int main() {
    // Write a program to print a bridge.
    int num; 
    cin >> num;
    int count = 1;
    int var = (num*2)-1;
    for (int j = 1; j <= var; j++) cout<<"*";
    cout<<endl;
    for (int i = num-1; i >= 1; i--){
        for (int k = i; k >= 1; k--) cout<<"*";
        for (int l = 1; l <= count; l++) cout<<" ";
        for (int m = i; m >= 1; m--) cout<<"*";
        count += 2;
        cout<<endl;
    }
    
    
        

    return 0;
}
