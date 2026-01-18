#include <iostream>
using namespace std;
int count = 0;
void print(int num){
    if (num==0) cout<<count;
    count += num;
    print(num-1);
}

int main () {
    print(10);
}
