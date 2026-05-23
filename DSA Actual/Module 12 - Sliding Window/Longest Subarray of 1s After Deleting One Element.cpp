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

    int i = 0, j = 0;
    int flips = 0;
    int max_count = 0;

    int length = nums.size();

    while (j < length) {

        if (nums[j] == 0) {
            flips++;
        }

        while (flips > 1) {
            if (nums[i] == 0) {
                flips--;
            }
            i++;
        }

        max_count = max(max_count, j - i);

        j++;
    }

    cout << max_count;

    return 0;
}
