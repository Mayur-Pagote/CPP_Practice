#include <iostream>
using namespace std;



int factorial (int n){
    int count = 1;
    for (int i = 1; i <= n; i++){
        count *= i;
    }
    return count;
}

int nCr (int x, int y) {
    int n = factorial(x);
    int r = factorial(y);
    int nr = factorial(x-y);

    cout<<n/(r*nr);
}


int main() {

    for (int i = 0; i <= 6; i++){
        for (int j = 0; j <= i; j++){
            nCr(i,j);
            cout<<" ";
        }
        cout<<endl;
    }
    
}
