#include <iostream>
#include <vector>
using namespace std;

vector<long long> factorial ( int n){
    vector<long long> arr (n+1, 1);
    int MOD = 1000000007;
    for (int i = 2; i <= n; i++){
        arr[i] = ((i%MOD) * (arr[i-1] % MOD)) % MOD;
    }
    return arr;
}

int main () {
    int num;
    cin>>num;
    vector<long long> arr = factorial(num);
    for (int i =1 ; i <= num; i++){
        cout<<arr[i]<<endl;
    }

}
