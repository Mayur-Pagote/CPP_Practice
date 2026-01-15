#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main () {
    string str;
    cin>>str;
    int length = str.length(), count = 0;


    for (int  i = 0 ; i < str.length(); i++){
        if (str[i] == 'a' ||str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ) count += 1;
    }

    cout<<length-count;


}
