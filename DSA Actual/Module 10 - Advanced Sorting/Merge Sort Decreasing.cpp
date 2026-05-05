#include <iostream>
#include <vector>
using namespace std;


void merge(vector<int> &arr1, vector<int>&arr2, vector <int> &res){
    res.clear();

    int i = 0 , j = 0;

    while (i < arr1.size() && j < arr2.size()){
        if (arr1[i] >arr2[j] ){
            res.push_back(arr1[i]);
            i += 1;
        }
        else {
            res.push_back(arr2[j]);
            j += 1;
        }
    }

    if ( i == arr1.size()) {
        while (j != arr2.size()){
            res.push_back(arr2[j]);
            j += 1;
        }
    }
    else {
        while (i != arr1.size()){
            res.push_back(arr1[i]);
            i += 1;
        }
    }


}


void mergeSort(vector<int> &ans){
    if (ans.size() == 1) return;
    int length = ans.size();
    int n1 = length/2;
    int n2 = length - length/2;

    vector<int> arr1(n1);
    vector<int> arr2(n2);

    for (int i = 0 ; i < n1; i++){
        arr1[i] =ans[i];
    }

    for (int j = 0 ; j < n2; j++){
        arr2[j] = ans[j+n1];
    }

    mergeSort(arr1);
    mergeSort(arr2);

    merge(arr1,arr2, ans);

}



int main () {
    vector<int> ans;
    int length;
    cin>>length;
    for (int i = 0 ; i < length;i++){
        int temp;
        cin>>temp;
        ans.push_back(temp);
    }
    mergeSort(ans);
    for (int i = 0 ; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}
