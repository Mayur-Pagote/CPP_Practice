#include <iostream>
using namespace std;

void palindrome(int start, int end, string str){
    if (start>=end){
        cout<<"palindrome";
        return;
    }
    if (str[start] != str[end]){
        cout<<"Not palindrome";
        return;
    }
    palindrome(start+1, end-1, str);
}

int main () {
    palindrome(0, 6, "racecar");
}
