#include <iostream>
using namespace std;

int stair(int num){
    if (num == 1) return 1;
    if (num == 2) return 2;
    if (num == 3) return 3;
    else return stair(num-1) + stair(num-2) + stair(num-3);
}

int main () {
    
    cout<<stair(4);
}
