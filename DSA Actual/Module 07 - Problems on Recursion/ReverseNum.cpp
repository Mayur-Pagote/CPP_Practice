#include <iostream>
#include <sstream>
using namespace std;

void reverseNum(int &ans, int num){
    if (num <= 0) {
    cout<<ans;
    return;}
    int res = ans*10 + num%10;
    reverseNum(res, num/10);
}

int main (){
    int ans = 0;
    int num = 1234;
    reverseNum(ans, num);
}
