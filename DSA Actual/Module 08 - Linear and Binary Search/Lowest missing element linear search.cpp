#include<iostream>
#include <vector>
using namespace std;


int main () {
    vector<int> arr = {0,1,2,3,4,8,9,13};
    for (int i = 0 ; i<arr.size(); i++){
        if (arr[i] != i) {
            cout<<i;
            break;
        }
    }
}
