#include <iostream>
using namespace std;

void print(int num){
    if (num==0) return;
    print(num-1);
    cout<<num<<endl;
}

int main () {
    print(10);
}
