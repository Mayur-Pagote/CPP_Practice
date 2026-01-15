#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main () {
    string str;
    cin>>str;
    string temp = str;
    reverse(temp.begin(),temp.end());

    if (temp == str) cout<<"Yes";
    else cout<<"NO";

}
