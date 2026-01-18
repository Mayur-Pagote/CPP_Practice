#include <iostream>
using namespace std;

void sum (int initial, int num){
    if (num == 0){
        cout<<initial<<endl;
        return;
    }
    else sum(initial+num, num-1);
}

int main () {
    sum(0,10);
}
