#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main () {
    vector<int> arr = {1,2,3,4,4};
    int low = 0, high = arr.size()-1;
    int dup = -1;
    while (low <= high){
        int mid = (low+high)/2;
        if (arr[mid] != mid+1){
            dup = arr[mid];
            high = mid-1;
        }
        else low = mid+1;
    }

    cout<<dup;
    
}
