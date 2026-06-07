#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long ans = 0;

    for (long long d = 2; d * d <= n; d++) {
        while (n % d == 0) {
            ans += d;
            n /= d;
        }
    }

    if (n > 1) ans += n;  // remaining prime factor

    cout << ans << endl;
    return 0;
}
