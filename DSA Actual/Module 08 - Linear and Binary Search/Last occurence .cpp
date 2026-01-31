#include <iostream>
#include <vector>
using namespace std;

int main () {
    int size;
    cin>>size;

    vector<int> arr;
    for(int i = 0; i< size; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    int target;
    cin>>target;

    int low = 0, high = size-1;
    while(low <= high){
        int mid = (low+high) / 2;
        if (arr[mid] == target){
            if (mid<size &&arr[mid+1] == target){
                low = mid+1;
            }
            else {
                cout<<mid;
                break;
            }
        }
        else if (arr[mid] > target) high = mid-1;
        else  low = mid+1;
    }
}
