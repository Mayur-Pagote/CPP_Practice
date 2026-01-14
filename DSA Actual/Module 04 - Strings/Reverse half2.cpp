#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void rever(string &str, int len){
    int  i= 0;
    while (i < len){
        swap(str[i], str[len]);
        i += 1;
        len -= 1;
    }
}

int main () {
    string str;
    cin>>str;
    int half;
    int len = str.length();
    if (len %2 == 0)  half = len/2 -1;
    else  half = len/2 ;
    rever(str, half);

    cout<<str;
}
