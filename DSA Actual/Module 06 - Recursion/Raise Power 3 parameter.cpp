#include <iostream>
using namespace std;

int pow (int a, int b, int c){
    if (b == 1) {
        cout<<a<<endl;
        return 1;
    };
    return  pow(a*c, b-1, c);
    
}

int main () {
    cout<<pow(3, 4, 3);
