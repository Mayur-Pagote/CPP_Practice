#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(vector<int> arr, int target){
    int low = 0, high = arr.size()-1;
    int foundAt = -1;
    while (low<=high){
        int mid = (low+high)/2;
        if (arr[mid] == target){
            return mid;
        }
        else if (arr[mid] < target) low = mid+1;
        else high = mid -1;
    }
    return foundAt;
}


int main () {
    vector<vector<int>> arr = {{1,3,5,7}, {10,11,16,20}, {23,30,34,60}};
    int target = 34, foundAt = -1;
    int low = 0 , high = arr.size()-1;
    while(low <= high){
        int mid = (low+high)/2;
        int insize = arr[mid].size()-1;
        if (arr[mid][0]<= target && target <= arr[mid][insize]){
            foundAt = binarySearch(arr[mid], target);
            break;
        }
        else if (arr[mid][0] > target) high = mid -1;
        else low = mid+1;
    }
    cout<<foundAt;
}
