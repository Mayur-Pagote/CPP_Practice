#include <iostream>
#include <algorithm>
#include <string>
using namespace std;




int main () {
    string str;
    getline(cin, str);

    string str2;
    getline(cin, str2);


    sort(str.begin(), str.end());
    sort(str2.begin(), str2.end());

    if (str==str2) cout<<"True";
    else cout<<"False";

}
