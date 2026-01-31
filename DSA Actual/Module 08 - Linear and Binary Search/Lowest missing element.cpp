#include<iostream>
#include <vector>
using namespace std;


int main () {
    vector<int> arr = {1,2,3,4,5};
    int low = 0, high = arr.size()-1, ans = -1;
    while (low <= high){
        int mid = (low+high) / 2;
        if (arr[mid] == mid){
            low = mid + 1;
        }
        else {
            ans = mid;
            high = mid - 1;
        }
    }
    cout<<ans;
}
