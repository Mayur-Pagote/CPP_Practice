#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main () {

    string s, t;
    cin>>s;
    cin>>t;

    vector<int> v1(150, 1000);
        vector<int> v2(150, 1000);
    int flag = 1;
        for (int i = 0 ; i < s.length(); i++){
            int ids = (int)s[i];
            int idt = (int)t[i];
            if (v1[ids] == 1000 && v2[idt] == 1000) {
                v1[ids] = abs(s[i] - t[i]);
                v2[idt] = abs(s[i] - t[i]);
            }
            else if (v1[ids] != abs(s[i] - t[i]) && abs(s[i] - t[i]) != v2[idt]){
                flag = 0;
                break;
            };
        }
        if (flag) cout<<"Yes";
        else cout<<"No";

}
