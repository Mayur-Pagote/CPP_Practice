#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main () {
    vector<int> v = {3,35,23,5,5,423,21,43,3,5,65,56};
    int ind;
    int x = 3;
    for (int i = 0; i<v.size(); i++){
        if (v[i] == x) ind = i;
    }

    cout<<ind;
}
