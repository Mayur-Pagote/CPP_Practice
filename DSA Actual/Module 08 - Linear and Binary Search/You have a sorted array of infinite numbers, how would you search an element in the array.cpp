#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main () {
    vector<int> arr = {1,2,3,4,12,232,245,267,290,330,345,367,390,1000,1230,1500,1890,2000,20123,120120};
    int find = 1890;

    int low = 0, high = 1;

    int foundAt = -1;

    while (high < arr.size() && find > arr[high]) {
        low = high;
        high = high * 2;
    }

    while (low<=high){
        int mid = (low+high) / 2;
        if (arr[mid] == find){
            foundAt = mid;
            break;
        }
        else if (arr[mid] < find){
            low = mid + 1;
        }
        else high = mid-1;
    }
    cout<<foundAt;
}
