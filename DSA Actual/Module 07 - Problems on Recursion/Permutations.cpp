#include <iostream>
#include <sstream>

using namespace std;


void perm(string ans, string str, int k) {
    if (ans.length() == k) {
        cout << ans << endl;
        return;
    }

    for (int i = 0; i < str.length(); i++) {
        perm(ans + str[i],
             str.substr(0, i) + str.substr(i + 1),
             k);
    }
}


int main () 
{

    string ans = "";
    string str = "abc";
    int k =3;
    perm(ans, str, k);
    
}
