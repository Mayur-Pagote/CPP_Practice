#include <iostream>
#include<sstream>
using namespace std;

void bcon(string str, int decimal){
    if(decimal <= 0) {
        cout<<str;
        return;
    }

    bcon(to_string(decimal%2)+str, decimal/2);
}

int main () {
    string binary = "";
    int num = 12;
    bcon(binary, num);
    
}
