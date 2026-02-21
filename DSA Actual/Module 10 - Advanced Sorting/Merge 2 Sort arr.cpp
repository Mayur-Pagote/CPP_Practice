#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int> &arr1, vector<int> &arr2, vector<int> &res){
    int i = 0, j = 0;
    while (i < arr1.size() && j < arr2.size()){
        if (arr1[i] < arr2[j]){
            res.push_back(arr1[i]);
            i += 1;
        }
        else {
            res.push_back(arr2[j]);
            j += 1;
        }
    }
    if (i == arr1.size()){
        for (int k = j ; k < arr2.size();k++){
            res.push_back(arr2[j]);
        }
    }
    else{
        for (int k = i ; k < arr1.size();k++){
            res.push_back(arr1[i]);
        }
    }
}

int main () {

    vector<int> arr1 = {1,3,5};
    vector<int> arr2 = {2, 4, 7};
    vector<int> res;

    merge(arr1, arr2, res);
    for(int i = 0 ; i< res.size(); i++){
        cout<<res[i]<<" ";
    }
}
