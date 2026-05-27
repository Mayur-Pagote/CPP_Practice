#include <iostream>
#include <string>
using namespace std;

string decimal_to_binary(int decimal){
    string res = "";
    while (decimal >= 1){
        char ch = (decimal%2) + '0';
        res = ch+res ;
        decimal /= 2;
    }
    return res;
}

void flip_binary(string &str){
    for(int i=0; i< str.length(); i++) {
        if (str[i]=='1') str[i] = '0';
        else str[i] = '1';
    }
}

int binary_to_decimal(string str){
    int decimal = 0;
    int length = str.length();
    for (int i = length-1; i >= 0; i--){
        
        char ch = str[i];
        int val = ch-'0';
        decimal += val * (1<<(length-i-1));
    }
    return decimal;
}

int main () {
    int num;
    cin>>num;
    string num_to_binary = decimal_to_binary(num);
    flip_binary(num_to_binary);
    cout<<binary_to_decimal(num_to_binary);

}
