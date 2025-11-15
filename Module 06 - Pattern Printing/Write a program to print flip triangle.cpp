#include <iostream>
using namespace std;

int main() {
	// Write a program to print flip triangle.
    int n;
    cin>>n;
    int var = n-1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j<= var; j++){
            cout<<" ";
        }
        for (int k = 1; k <= i; k++){
            cout<<"*";
        }
        cout<<endl;
        var -= 1;
    }
	
}
