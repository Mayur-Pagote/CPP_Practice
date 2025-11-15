#include <iostream>
using namespace std;

int main() {
    // Write a program to print a number pyramid plaindrome.
    int num; 
    cin >> num;
    int space = num-1;
    for (int i = 1; i <= num; i++) {
        int invar = (i*2)-1;
        for (int j = space; j >= 1; j--) cout<<" ";
        for (int k = 1; k <= (invar/2)+1; k++) cout<<k;
        for (int l = invar/2; l >= 1; l--) cout<<l;
        space -= 1;
        cout<<endl;

    }
        

    return 0;
}
