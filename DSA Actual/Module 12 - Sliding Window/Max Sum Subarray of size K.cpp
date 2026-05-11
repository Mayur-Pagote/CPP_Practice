#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main () {
    long long res = 0;
    vector<int> arr = {7,1,2,5,8,4,9,3,6};
    int  k = 3;
    for (int  i = 0 ; i<k; i++){
        res += arr[i];
    }

    int  j = k;
    long long max_res = res;
    for (int i = 1; i<= arr.size()-k;i++){
        res -= arr[i-1];
        res += arr[j];
        j += 1;
        max_res = max(max_res, res);
    }
    cout<<max_res;
}
