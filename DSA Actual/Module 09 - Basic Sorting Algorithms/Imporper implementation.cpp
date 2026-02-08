Given an array with N distinct elements, convert the given array to a form where all elements are in the range from 0 to N−1. 
The order of elements is the same, i.e., 0 is placed in the place of the smallest element, 
1 is placed for the second smallest element, …, N−1 is placed for the largest element.

#include <iostream>
#include <vector>
#include<climits>
using namespace std;
void displayVec(vector<int> arr){
    for(int i =0 ; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

int main () {
    vector<int> arr = {19,12,23,8,16};
    int idx = 0;
    while (idx < arr.size()){
        int minVal = INT_MAX;
        int minIdx = idx;
        for (int i = 0 ; i < arr.size() ; i++){
            if (minVal > arr[i] && arr[i] > idx){
                minVal = arr[i];
                minIdx = i;
            }
        }
        arr[minIdx] = idx;
        idx += 1;
    }
    displayVec(arr);
}
