#include <iostream>
#include <vector>
using namespace std;


void subs (string ans, string str, vector<string> &vstr){
    if (str == "") {
        vstr.push_back(ans);
        return;
    }
    char ch = str[0];
    
    subs(ans+ch, str.substr(1),vstr);
    subs(ans, str.substr(1), vstr);
}

int main () 
{

    string ans = "";
    string str = "abc";
    vector<string> vstr;
    subs(ans, str, vstr);

    for (string i : vstr){
        cout<<i<<endl;
    }
}
