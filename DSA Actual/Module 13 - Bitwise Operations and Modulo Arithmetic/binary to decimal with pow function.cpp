#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int binary_to_decimal(string binary){
    int length = binary.length();
    int count = 0, decimal = 0;
    for (int i = length-1; i>-1; i--){
        if (binary[i] == '1'){
            decimal += pow(2, count);
        }
        count += 1;
    }
    return decimal;
}

int main () {
    cout<<binary_to_decimal("1101");
   
}
