#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void rever(string &str){
    int  i= 2, len = 5;
    while (i < len){
        swap(str[i], str[len]);
        i += 1;
        len -= 1;
    }
}

int main () {
    string str;
    getline(cin, str);

    int len = str.length();
    int half = len/2;
    

    cout<<str.substr(half, len-1);
}
