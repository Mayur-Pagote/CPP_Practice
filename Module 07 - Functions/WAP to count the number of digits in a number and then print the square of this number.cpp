#include <iostream>
using namespace std;

int digit_sq(int a){
    int count = 0;
    while (a > 0){
        count += 1;
        a /= 10;
    }
    return count * count;
    
}

int main() {
    cout<<digit_sq(39402);
}
