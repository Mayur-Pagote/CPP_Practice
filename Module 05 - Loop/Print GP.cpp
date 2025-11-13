#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, r, n;
    cin >> a >> r >> n; // Input: start, ratio, count

    for (int i = 1; i <= n; i++) {
        int an = a * pow(r, i - 1);
        cout << an << " ";
    }
    return 0;
}
