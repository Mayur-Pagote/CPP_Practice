#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main () {
    string str;
    getline(cin, str);
    vector<string> strVec;
    stringstream ss(str);
    string temp;
    while (ss >> temp) {
        strVec.push_back(temp);
    }

    string mx = strVec[0];

    for(int i = 1; i < strVec.size(); i++){
        mx = max(mx, strVec[i]);
    }
    cout<<mx;
}
