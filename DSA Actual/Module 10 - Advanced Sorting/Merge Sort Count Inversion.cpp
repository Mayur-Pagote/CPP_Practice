#include <iostream>
#include <vector>
using namespace std;

int global_count = 0;

int inversion (vector<int> &arr1, vector<int> &arr2){
    int i = 0,  j = 0;
    while (i < arr1.size() && j < arr2.size()){
        if (arr1[i] > arr2[j]) {
            global_count += arr1.size() - i;
            j += 1;
        }
        else i+=1;
    }
    return global_count;
}

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
    inversion(a,b);
    merge(a,b,ans);
}



int main () {

    vector<int> res = {5,1,3,0,4,9,6};

    mergeSort(res);
    cout<<global_count;
    // for (int i = 0 ; i < res.size(); i++){
    //     cout<<res[i]<<" ";
    // }



}
