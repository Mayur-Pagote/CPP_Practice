#include<iostream>
#include <vector>
using namespace std;


int main () {
    vector<int> arr1 = {1,4,5,8};
    vector<int> arr2 = {2,3,6,7,10};
    vector<int> res;
    int arr1len = arr1.size()-1;
    int arr2len = arr2.size()-1;
    int i = 0, j = 0;
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] <= arr2[j]) {
            res.push_back(arr1[i++]);
        } else {
            res.push_back(arr2[j++]);
        }
    }

    while (i < arr1len) {
        res.push_back(arr1[i]);
        i += 1;
    }
    while (j < arr2len) {
        res.push_back(arr2[j]);
        j += 1;
    }


    for (int l = 0; l < res.size(); l++) cout<<res[l]<<" ";
}
