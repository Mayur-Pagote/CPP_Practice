#include <iostream>
using namespace std;

int main() {
    // WAP to print the sum of all the even digits of a given number.
    int n, rem, count=0;
    cout<<"Enter a number: ";
    cin>>n;

    while (n>0){
        rem = n%10;
        if (rem % 2 == 0) count += rem;
        n /= 10;

    }

    cout<<count;

}
