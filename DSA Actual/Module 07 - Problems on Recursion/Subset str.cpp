#include <iostream>
using namespace std;


void subs (string ans, string str){
    if (str == "") {
        cout<<ans<<endl;
        return;
    }
    char ch = str[0];
    
    subs(ans+ch, str.substr(1));
    subs(ans, str.substr(1));
}

int main () 
{

    string ans = "";
    string str = "abc";
    subs(ans, str);
}
