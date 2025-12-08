#include <iostream>
using namespace std;


int factorial (int n){
    int count = 1;
    for (int i = 1; i <= n; i++){
        count *= i;
    }
    return count;
}


int main() {
    int n = factorial(7);
    int r = factorial(2);
    int nr = factorial(7-2);

    cout<<n/(r*nr);
}
