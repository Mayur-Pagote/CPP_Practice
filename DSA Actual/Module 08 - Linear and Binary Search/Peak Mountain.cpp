#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
    int size;
    cin>>size;
    vector<int> v;
    for(int i = 0; i<size;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int low = 0, high = size-1, ans= 0;
    while (low <= high){
        int mid = (low+high)/2;
        if (v[mid]>v[mid+1] && v[mid]>v[mid-1]){
            ans = mid;
            break;
        }
        else if (v[mid] > v[mid+1]) high = mid;
        else if (v[mid] > v[mid-1]) low = mid;
    }
    cout<<ans;
	return 0;
}
