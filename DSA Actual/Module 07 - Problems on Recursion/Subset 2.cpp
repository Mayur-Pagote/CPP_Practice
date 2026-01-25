#include <iostream>
using namespace std;


void subs (string ans, string str, bool flag){
    if (str == "") {
        cout<<ans<<endl;
        return;
    }
    char ch = str[0];
    if (str.length()  == 1){
        if (flag == true) subs(ans+ch, str.substr(1), true);
        subs(ans, str.substr(1), true);
        return;
    }
    char ch2 = str[1];
    if (ch == ch2){
        if (flag == true) subs(ans+ch, str.substr(1), true);
        subs(ans, str.substr(1), false);
    }
    else {
        if (flag == true) subs(ans+ch, str.substr(1), true);
        subs(ans, str.substr(1), true);
    }
}

int main () 
{

    string ans = "";
    string str = "aab";
    subs(ans, str, true);
}
