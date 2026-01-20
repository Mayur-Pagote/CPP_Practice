#include <iostream>
using namespace std;

int fibo (int num){
    if (num == 0) return 0;
    if (num == 1) return 1;
    else return fibo(num-1) + fibo(num-2);
}

int main () {
    for(int i = 0; i <= 10; i++){
        cout<<fibo(i);
        cout<<endl;
    }
}
