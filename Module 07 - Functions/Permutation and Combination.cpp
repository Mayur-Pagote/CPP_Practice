#include <iostream>
using namespace std;

int nCr (int n, int r){
    int num = 1, rfact = 1, dif = 1;

    for (int i = 1; i <= n; i++){
        num *= i;
    }

    for (int j = 1; j <= r; j++){
        rfact *= j;
    }

    for (int k = 1; k <= n - r; k++){
        dif *= k;
    }

    int ans = num / (rfact * dif);
    cout << ans;
    return ans;
}

int main() {
    nCr(5,2); // Output should be 10
}
