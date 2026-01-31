#include <iostream>
#include <vector>
using namespace std;

int findOccur(vector<int> arr, int target, bool flag){
    int low = 0, high = arr.size()-1, ans = -1;
    int size = arr.size()-1;
    while (low <= high){
        int mid = (low + high) / 2;
        if (arr[mid] == target){
            if (flag){
                if (mid > 0 && arr[mid-1] == target) high = mid-1;
                else return mid;
            }
            else {
                if (mid < size && arr[mid+1] == target) low = mid+1;
                else return mid;
                    
            }
        }
        else if (arr[mid] > target) high = mid-1;
        else low = mid+1;
    }
    return ans;
}

int main() {
	// your code goes here
    int size;
    cin>>size;
    vector<int> arr;
    for(int i =0; i<size; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int target;
    cin>>target;
    int f = findOccur(arr, target, true);
    int l = findOccur(arr, target, false);
    cout<<f<<" "<<l;
	return 0;
}
