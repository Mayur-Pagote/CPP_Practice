#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int find_set_bits(int digit){
    int count = 0;
    while (digit){
        digit = digit & (digit-1);
        count += 1;
    }
    return count;
}

int main () {
    int num;
    cin>>num;
    cout<<find_set_bits(num);
}
