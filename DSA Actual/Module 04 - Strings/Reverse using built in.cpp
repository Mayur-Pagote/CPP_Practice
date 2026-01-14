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

    reverse(str.begin()+2, str.begin()+6);

    cout<<str;
}
