#include <iostream>
#include <string>
using namespace std;

void flip_bits (string &str){
    int length = str.length();
    for (int i = 0; i < length; i++){
        if (str[i]=='1') str[i]='0';
        else str[i]='1';
    }

}

void display(string str){
    for (int i = 0 ; i < str.length(); i++){
        cout<<str[i];
    }
}


int main () {
    string str  = "101011111";
    flip_bits(str);
    display(str);
    
}
