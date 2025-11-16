
#include <iostream>
using namespace std;

int main() {
    // Write a program to print side pyramid.
    int num; 
    cin >> num;
    
    for (int i = 1; i<=num; i++){
        for (int j = 1; j <= i; j++) cout<<"*";
        cout<<endl;
    }

    for (int i = num-1; i>=1; i--){
        for (int j = i; j >= 1; j--) cout<<"*";
        cout<<endl;
    }
}
