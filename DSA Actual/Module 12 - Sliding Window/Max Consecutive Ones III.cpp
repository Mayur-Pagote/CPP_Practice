#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    int length;
    cin >> length;

    vector<int> nums;

    for (int i = 0; i < length; i++) {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    int k;
    cin >> k;


    int i = 0;
    int j = 0;
    int flips = 0;
    int max_count = 0;

    while (j < length) {

        if (nums[j] == 0) {
            flips += 1;
        }

        while (flips > k) {

            if (nums[i] == 0) {
                flips -= 1;
            }

            i += 1;
        }

        max_count = max(max_count, j - i + 1);

        j += 1;
    }

    cout << max_count;

    return 0;
}
