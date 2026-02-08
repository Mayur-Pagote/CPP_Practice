#include <iostream>
#include <vector>
#include<climits>
#include <algorithm>
using namespace std;
void displayVec(vector<int> arr){
    for(int i =0 ; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

int main () {
    vector<int> arr;
    int size;
    cin>>size;
    for(int k = 0 ; k < size ; k++){
        int temp;
        cin>>temp;
        arr.push_back(temp) ;
    }
    vector<int> tempArr = arr;
    sort(tempArr.begin(), tempArr.end());
    int idx = 0;
    while (idx<arr.size()){
        for (int i = 0; i < arr.size(); i++){
            if (arr[i] == tempArr[idx]){
                arr[i] = idx;
            }
        }
        idx += 1;
    }
    displayVec(arr);
}
