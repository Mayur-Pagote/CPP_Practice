#include <iostream>
using namespace std;

void check2power(int num){
   if (num == 1) {
    cout<<"Yes it is..";
    return;
   }
   if (num <= 0 || num % 2 != 0) return;
   check2power(num/2); 
}

int main () {
    check2power(256);
}
