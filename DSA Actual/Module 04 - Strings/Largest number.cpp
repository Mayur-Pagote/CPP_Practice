#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main () {
    vector<string> numVector;
    string temp;
    int length, index = 0, maxNum = 0;
    cin>>length;
    for (int i =0 ; i<length; i++){
        cin>>temp;
        numVector.push_back(temp);
    }

    for (int i =0 ; i < length;i++){
        if (stoi(numVector[i])>maxNum) {
            maxNum = stoi(numVector[i]);
            index = i;
        }
    }

    cout<<maxNum<<" "<<index;

}
