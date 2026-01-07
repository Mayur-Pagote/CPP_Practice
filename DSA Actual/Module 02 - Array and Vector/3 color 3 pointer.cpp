#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector <int> v = {1,0,1,2,1,2,2,0,0,1,2,1,2,0};

    int low = 0, mid = 0, high = v.size()-1;
    while (mid <= high){
        if (v[mid] == 2) {
            swap(v[mid], v[high]);
            high -= 1;
        } 
        else if (v[mid] == 0){
            swap(v[low], v[mid]);
            low += 1;
            mid += 1;
        }
        else if (v[mid] == 1){
            mid += 1;
        }
    }

    for (int i = 0 ; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
}
