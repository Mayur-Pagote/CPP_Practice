#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

string decimal_to_binary(int decimal){
    string res = "";
    while (decimal >= 1){
        char digit = (decimal % 2) + '0';
        decimal /= 2;
        res = digit+res;
        
    }
    return res;
}

int main (){
    int num;
    cin>>num;
    cout<<decimal_to_binary(num);
}
