#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x, prev;
    cin >> prev;
    cout << prev;

    for (int i = 1; i < n; i++) {
        cin >> x;
        if (x != prev) {
            cout << " " << x;
            prev = x;
        }
    }

    return 0;
}
