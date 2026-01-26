#include <iostream>
#include <vector>
using namespace std;

void combination (vector<int>v, int arr[], int size, int target, int idx){
    if (target <= -1) return;
    if (target == 0){
        for(int j =0 ; j<v.size(); j++){
            cout<<v[j]<<" ";
            
        }
        cout<<endl;
        return;
    }
    for(int i = idx ; i < size; i++){
        v.push_back(arr[i]);
        combination(v,arr, size, target-arr[i], i);
        v.pop_back();
    }
}

int main () {
    vector<int> v;
    int arr[] = {5,2,3};
    combination(v, arr, 3, 8, 0);
}
