#include <iostream>
using namespace std;

void print_nto1(int num){
    if (num == 1) cout<<1;
    else {
    cout<<num<<endl;
    print_nto1(num-1);
    };
    
}


int main () {
    int num;
    cin>>num;

    print_nto1(num);
}

