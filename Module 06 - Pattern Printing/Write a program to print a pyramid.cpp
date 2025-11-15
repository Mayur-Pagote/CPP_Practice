#include <iostream>
using namespace std;

int main() {
    // Write a program to print a pyramid.
    int num; 
    cin >> num;
    int space = num-1;
    for (int i = 1; i <= num; i++) {
        for (int j = space; j >= 1; j--) cout<<" ";
        for (int k = 1; k <= (i*2)-1; k++) cout<<"*";
        space -= 1;
        cout<<endl;

    }
        

    return 0;
}
