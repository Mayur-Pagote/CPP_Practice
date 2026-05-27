
#include <iostream>
#include <string>
#include <cmath>
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


int compare_binary(string x, string y){
    int x_len = x.length(), y_len = y.length();
    int count  = 0;

    for (int i = 0 ; i < x_len;i++){
        if (x[i] != y[i]) count += 1;
    }
    return count;
}

void modify_binary(string &x, string &y){
    int x_len = x.length(), y_len = y.length();
    int diff = abs(x_len-y_len);

    if (x_len > y_len){
        for (int i = 0 ; i < diff;i++){
            y = '0'+y;
        }
    }
    else {
        for (int i = 0 ; i < diff;i++){
            x = '0'+x;
        }
    }
    
}


int main () {
    int x, y;
    cin>>x;
    cin>>y;
    string x_binary = decimal_to_binary(x);
    string y_binary = decimal_to_binary(y);

    
    modify_binary(x_binary, y_binary);
    
    cout<<compare_binary(x_binary, y_binary);


}
