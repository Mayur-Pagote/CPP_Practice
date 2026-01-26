#include <iostream>
using namespace std;

int check(int n , int k){
    if (n == 1) return 0;
    if (k % 2 ==0){
        int ans = check(n-1, k/2);
        if (ans == 1) return 0;
        else return 1; 
    }
    else {
        return check(n-1, k/2+1);
    }
}

int main () {
    cout<<check(4,8);
}
