#include <iostream>
using namespace std;


void subs (string ans, string str, int k){
    if (str == "") {
        if (ans.length() == k) cout<<ans<<endl;
        return;
    }
    char ch = str[0];
    
    subs(ans+ch, str.substr(1), k);
    subs(ans, str.substr(1), k);
}

int main () 
{

    string ans = "";
    string str = "12345";
    int k =3;
    subs(ans, str, k);
}
