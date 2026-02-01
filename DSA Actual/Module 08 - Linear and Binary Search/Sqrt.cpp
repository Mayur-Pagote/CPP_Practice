#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int num;
    cin>>num;
    int low=0, high = num, ans = -1;
    while (low<=high){
        long long mid = (low+high)/2;
        long long midsq = mid*mid;
        if (midsq == num) {
            ans = mid;
            break;
        }
        else if (midsq > num) high = mid-1;
        else {
            ans= mid;
            low = mid+1;
        }
    }
    cout<<ans;
	return 0;
}
