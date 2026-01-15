#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main () {
    int alphabets[26];
    for (int i = 0; i < 26; i++) {
        alphabets[i] = 0;
    }
    string str;
    getline(cin, str);


    for (int i = 0; i<str.length(); i++){
        alphabets[str[i]-97] += 1;
    }
    int maxCount = 0;
    char c = '\0';
    for (int i = 0; i < 26; i++) {
        if (alphabets[i] > maxCount){
            maxCount = alphabets[i];
            c = i+97;
        }
    }

    cout<<c<<" "<<maxCount;





}
