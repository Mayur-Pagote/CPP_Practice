#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &arr1, vector<int> &arr2, vector<int> &res) {
    res.clear();
    int i = 0, j = 0;

    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] <= arr2[j]) {
            res.push_back(arr1[i]);
            i++;
        } else {
            res.push_back(arr2[j]);
            j++;
        }
    }

    while (i < arr1.size()) {
        res.push_back(arr1[i]);
        i++;
    }

    while (j < arr2.size()) {
        res.push_back(arr2[j]);
        j++;
    }
}

void mergeSort(vector<int> &ans){
    int n = ans.size();
    if (n== 1)return;
    int left = n/2, right = n - n/2;
    vector<int> a(left);
    vector<int> b(right);

    for (int i = 0 ; i < left; i++){
        a[i] = ans[i];
    }

    for (int k = 0; k < right;k++){
        b[k] = ans[k+left];
    }

    mergeSort(a);
    mergeSort(b);
    merge(a,b,ans);
}



int main () {
    vector<int> arr1 = {1,3,5,7};
    vector<int> arr2 = {2,4,6,8};
    vector<int> res = {1,5,2,23,7,8,3};

    mergeSort(res);

    for (int i = 0 ; i < res.size(); i++){
        cout<<res[i]<<" ";
    }

}
