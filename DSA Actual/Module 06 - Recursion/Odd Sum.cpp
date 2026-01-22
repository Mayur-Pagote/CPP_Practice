#include <iostream>
using namespace std;

int oddsum(int a, int b){
    if (a>b) return 0;
    if (b % 2 !=0) return b + oddsum(a,b-1);
    return oddsum(a, b-1) ;
}

int main () {
    cout<<oddsum(2,6);
}
