#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main () {
    // 0 -> 48
    string str;
    cin>>str;

    int count = 0;
    for(int i = 0 ; i<str.length(); i++){
        count = count * 10 + (str[i] - 48);
    }

    cout<<count;

}
