#include<iostream>
#include <vector>
using namespace std;


int main () {
    vector<int> arr = {0,1,2,3,4,5,7};
    int low = 0, high = arr.size()-1, ans = 0;
    while (low <= high){
        int mid = (low+high) / 2;
        if (arr[mid] == mid){
            if (mid+1 < arr.size() && arr[mid+1] == mid+1) low = mid + 1;
            else {
                ans = mid+1;
                break;
            }
        }
        else if (arr[mid] != mid){
            high = mid - 1;
        }
    }
    cout<<ans;
}
