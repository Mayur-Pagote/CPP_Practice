#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main () {
    string str = "I am a coder I like to fly";
    stringstream ss(str);
    string temp;
    vector<string> vstr;
    while (ss>>temp){
        vstr.push_back(temp);
    }
    sort(vstr.begin(), vstr.end());
    int length = vstr.size();
    int count = 0;
    int maxCount = 0;
    string maxStr;
    string tempstr = vstr[0];
    for (int i = 0 ; i < length; i++){
        if (vstr[i] == tempstr){
            count += 1;
        }
        else {
            if (maxCount < count) {
                maxCount = count;
                maxStr = vstr[i-1];
            }
            tempstr = vstr[i];
            count = 1;
        }

    }
    if (count > maxCount) {
    maxCount = count;
    maxStr = tempstr;  // tempstr holds the last word
        }

    cout<<maxCount<<" "<<maxStr;
}
