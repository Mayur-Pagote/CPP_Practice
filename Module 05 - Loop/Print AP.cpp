#include <iostream>
using namespace std;

int main() {
    int diff, a, n;
    cin >> a >> diff >> n; // Input: start, diff, count

    for (int i = 1; i <= n; i++) {
        int an = a + (i - 1) * diff;
        cout << an << " ";
    }
    return 0;
}
