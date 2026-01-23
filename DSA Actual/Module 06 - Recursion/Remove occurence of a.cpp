
#include <iostream>
using namespace std;

void remove_a(string s, int length, string &n){
    if (s[length] == '\0') return;
    if (s[length] != 'a'){
        n += s[length];
        remove_a(s, length+1, n);
    }
    else remove_a(s, length+1, n);
}

int main () {
    string n = "";
    remove_a("Mayur", 0, n);
    cout<<n;
}
