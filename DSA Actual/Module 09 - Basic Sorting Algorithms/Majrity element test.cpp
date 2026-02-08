#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
    int size;
    cin>>size;
    vector<int> nums;
    for(int i  =0 ; i < size ;i++){
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    sort(nums.begin(), nums.end());
    cout<< nums[nums.size() / 2];
	return 0;
}
