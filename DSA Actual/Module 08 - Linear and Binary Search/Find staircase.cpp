#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main () {
    int n = 8;
    int low = 0, high = n;
    while (low <= high){
        int mid = (low + high) / 2;
        int coins = (mid*(mid+1))/2;
        if (coins == n){
            cout<<mid;
            break;
        }
        else if (coins < n){
            low = mid+1;
        }
        else high = mid-1;
    }
    cout<<high;
}
