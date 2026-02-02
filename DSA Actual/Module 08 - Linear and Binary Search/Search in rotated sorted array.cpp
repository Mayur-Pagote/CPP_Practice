#include <iostream>
#include<vector>
using namespace std;

int findPivot (vector<int> &arr){
    int low = 0, high = arr.size()-1;
    while (low<high){
        int mid = (low+high) / 2;
        if (arr[mid] > arr[high]) low = mid+1;
        else high = mid;
    }
    return low;
}

int binaryS(vector<int> &arr, int target, int start, int end){
    int ans = -1;
    while (start<=end){
        int mid = (start+end) / 2;
        if (arr[mid] == target){
            ans = mid;
            break;
        }
        else if (arr[mid] > target) end = mid - 1;
        else start = mid+1;
    }
    return ans;
}

int main () {
    int size;
    cin>>size;
    vector<int> arr;
    for(int i =0 ; i <size; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int target;
    cin>>target;

    int idx = findPivot(arr);
    if (idx == -1) {
        cout<<binaryS(arr,target,0, arr.size()-1);
    }
    
    else {
        int val = binaryS(arr,target,0, idx-1);
        if (val == -1) {
            val = binaryS(arr,target,idx,arr.size()-1);
        }
        cout<<val;
    }

}
