#include <iostream>
#include <vector>
using namespace std;



int main () {
    vector <int> v = {1,0,1,1,0,0,0,1,0,1,0,1,0};
    int i = 0, j = v.size()-1;
    while (i < j) {
    if (v[i] == 1 && v[j] == 0) {
        swap(v[i], v[j]);
        i++;
        j--;
    }
    else if (v[i] == 0) {
        i++;
    }
    else if (v[j] == 1) {
        j--;
    }
}


    for (int k = 0; k< v.size(); k++){
        cout<<v[k]<<" ";
    }
}
