#include <iostream>
using namespace std;

void bstrs(int length, int curr, string ans){
    if (curr == length) {
        cout<<ans<<endl;
        return;
    }
    bstrs(length, curr+1, ans+"0");
    char ch1 = ans[ans.length()-1];
    char ch2 = '1';
    if (ch1 != ch2 )bstrs(length, curr+1, ans+"1");
}

int main () {
    bstrs(3, 0, "");
}
