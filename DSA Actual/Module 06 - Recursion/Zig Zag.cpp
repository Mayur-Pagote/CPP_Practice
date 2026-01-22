#include <iostream>
using namespace std;

void zigzag(int num){
    if (num == 0) return;
    cout<<num;
    zigzag(num-1);
    cout<<num;
    zigzag(num-1);
    cout<<num;
}

int main () {
    zigzag(1);
}
