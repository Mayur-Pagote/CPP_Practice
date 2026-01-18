#include <iostream>
using namespace std;

int facto(int num){
    if (num == 0 || num == 1) return 1;
    else return (facto(num-1) * num);
}


int main () {
    int num;
    cin>>num;

    cout<<facto(num);
}
