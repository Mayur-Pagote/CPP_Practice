#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main () {
    vector<int> arr={10,9,8,7,5,4,3,2,1};
    int low = 0 , high = arr.size()-1;
    int find = 5, foundat=-1;
    while (low <= high){
        int mid = (low+high)/2;
        if (arr[mid] == find ){
            foundat = mid;
            break;
        }
        else if (arr[mid] > find){
            low = mid + 1;
        }
        else high = mid - 1;
    }
    cout<<foundat;
}
