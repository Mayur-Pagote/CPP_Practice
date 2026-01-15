#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main () {

    int length;
    cin>>length;

    vector<string> strs;
    for (int i = 0 ; i < length; i++){
        string temp;
        cin>>temp;
        strs.push_back(temp);
    }

    sort(strs.begin(),strs.end());

    int  i = 0;
    string pref = "";
    while (true){
        if (strs[0][i] == strs[length-1][i] && i < strs[0].length() && i < strs[0].length()){
            pref += strs[0][i];
        }
        else break;
        i +=1;
    }
    cout<<pref;

}
