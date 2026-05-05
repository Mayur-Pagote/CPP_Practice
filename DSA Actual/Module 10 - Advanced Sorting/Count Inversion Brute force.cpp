#include <iostream>
#include <vector>
using namespace std;


int main () {
    vector <int> ans = {5,1,8,2,3};
    int count = 0;
    for (int i = 0 ; i < ans.size() ; i++){
        for (int j = i+1; j < ans.size(); j++){
            if (ans[i] > ans[j]) count += 1;
        }

    }
    cout<<count;
}
