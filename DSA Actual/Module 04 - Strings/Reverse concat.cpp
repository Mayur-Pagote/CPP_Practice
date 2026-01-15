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

    string temp;

    temp = str;

    reverse(temp.begin(), temp.end());

    cout<<str+temp;

}
