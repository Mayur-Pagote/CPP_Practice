#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
    int size;
    cin>>size;
    vector<int> v;
    for (int i = 0; i < size; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int target;
    cin>>target;

    int low = 0, high = size-1;
    int ans = 0;
    while (low <= high){
        int mid = (low+high) / 2;
     
        if (v[mid] >= target){
            ans = mid;
         high = mid-1;
        }
        else low = mid+1;
    }
    cout<<ans;
	return 0;
}
