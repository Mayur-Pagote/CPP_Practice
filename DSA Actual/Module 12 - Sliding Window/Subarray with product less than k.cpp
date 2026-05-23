#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> nums;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }

    int k;
    cin >> k;

    if (k <= 1) {
        cout << 0;
        return 0;
    }

    int i = 0, j = 0;
    long long product = 1;
    int count = 0;

    while (j < nums.size()) {

        product *= nums[j];

        while (product >= k) {
            product /= nums[i];
            i++;
        }

        count += (j - i + 1);
        j++;
    }

    cout << count;

    return 0;
}
