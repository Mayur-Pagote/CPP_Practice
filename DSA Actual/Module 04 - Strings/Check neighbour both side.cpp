#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int checkNeighbour(string str){
    int i =0, len = str.length() -1;
    int count = 0;
    while (i<len){
        int  j = i+1;
        if (i == 0 || j == len) {
            if (str[i] != str[j]) count += 1;
        }
        else if (str[i-1] != str[i] && str[i] != str[j]) count += 1;
        i += 1;
    }
    return count;
}


int main () {
    string str;
    cin>>str;

    cout<<checkNeighbour(str);
}
