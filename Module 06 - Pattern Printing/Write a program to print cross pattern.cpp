#include <iostream>
using namespace std;

int main() {
	// Write a program to print cross pattern.
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j<=n; j++){
            if (i == j) cout<<"*";
            else if (i + j == n+1) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
	
}
