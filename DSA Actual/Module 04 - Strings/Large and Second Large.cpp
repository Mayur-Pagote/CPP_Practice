#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main () {
    string num;
    int large = 0, secLarge = 0;

    cin>>num;

    for (int i = 0; i<num.length(); i++){
        int tempNum = num[i] - 48;
        if (tempNum > large){
            secLarge = large;
            large = tempNum;
        }
        else if (secLarge < tempNum) secLarge = tempNum;
    }

    cout<<large<<" "<<secLarge;

}
