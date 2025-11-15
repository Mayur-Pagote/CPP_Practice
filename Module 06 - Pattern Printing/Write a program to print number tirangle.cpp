#include <iostream>
using namespace std;

int main() {
	// Write a program to print number tirangle.
    int n, a=1;
    cin>>n;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j<=i; j++){
            cout<<a;
            a+=1;
        }
        cout<<endl;
    }
	
}
