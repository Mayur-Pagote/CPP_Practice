#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int find1s(vector<int> arr){
    int low = 0, high = arr.size()-1, ans= -1;
    while(low <= high){
        int mid = (low+high)/2;
        if (arr[mid] == 1) {
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;

    }
    if (ans == -1 ) return 0;
    else return arr.size() - ans;
}

int main () {
    vector<vector<int>> arr = {{0,0,0},{0,1,1},{0,1,1}};
    int length  = arr.size(), max1s = 0, row=-1;
    for (int i = 0 ; i < arr.size(); i++){
        int tempMax = find1s(arr[i]);
        if (tempMax>max1s){
            max1s=tempMax;
            row = i;
        }
    }
    cout<<row<<" "<<max1s;
    
    
}
