#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int binary_to_decimal(string binary){
    int length = binary.length();
    int decimal = 0;
    for (int i = length - 1; i >= 0; i--){
        char ch = binary[i];
        int val =ch - '0';
        decimal += val*(1<<(length-i-1));
    }
    return decimal;
}

int main () {
    cout<<binary_to_decimal("1101");
}


