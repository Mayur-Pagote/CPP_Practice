#include <iostream>
#include <vector>
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
        arr.push_back(temp);
    }
    int idx = 0;
    while (true){
        int minVal = arr[idx];
        int minIdx = idx;
        for (int i = idx; i < arr.size() ; i++){
            if (minVal > arr[i]) {
                minVal = arr[i];
                minIdx = i;
            }
        }
        swap(arr[idx], arr[minIdx]);
        idx += 1;

        if (idx >= arr.size()-1) break;
    }
    displayVec(arr);
}
