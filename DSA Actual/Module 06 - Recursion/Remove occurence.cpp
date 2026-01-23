#include <iostream>
using namespace std;

void remove_a(string &s, string &n){
    if (s[0] == '\0' ) return;
    if (s[0] != 'a'){
        n += s[0];
        
    }
    s.erase(0,1);
    remove_a(s,n);
}

int main () {
    string n="";
    string str = "Mayur";
    remove_a(str, n);
    cout<<n;
}
