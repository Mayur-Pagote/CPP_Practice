#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int just_low_power(int digit){
    int res = 2;
    int prev;
    while (digit> res){
        prev = res;
        if (res >= digit) break;
        res = res * (1<<1);
    }
    return prev;
}

int main () {
    int num;
    cin>>num;
    cout<<just_low_power(num);
}
