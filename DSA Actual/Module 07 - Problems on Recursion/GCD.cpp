#include <iostream>
using namespace std;

void gcd(int low, int high, int lownum){
    if (lownum == 1) {
        cout<<1;
        return;
    }
    if (low % lownum == 0 && high % lownum == 0){
        cout<<lownum;
        return;
    }
    gcd(low, high, lownum-1);
}

int main () {
    gcd(24, 60, 24);
}
