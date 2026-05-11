#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main () {
    long long res = 0;
    int length;
    cin>>length;
    vector<int> arr;
    for (int l = 0 ; l < length;l++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int  k ;
    cin>>k;
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
