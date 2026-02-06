#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<int> arr = {0,0,0,0,1,1};
    int low = 0, high = arr.size()-1, ans= 0;
    while(low <= high){
        int mid = (low+high)/2;
        if (arr[mid] == 1) {
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;

    }
    cout<< arr.size() - ans;
}
