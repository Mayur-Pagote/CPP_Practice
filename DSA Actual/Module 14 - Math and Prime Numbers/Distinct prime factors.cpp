#include <iostream>
#include <vector>
#include <set>
#include <cmath>
#include <algorithm>

using namespace std;

int distinctPrimeFactors(vector<int>& nums) {
    int max_num = 0;

    for (int i = 0; i < nums.size(); i++) {
        max_num = max(max_num, nums[i]);
    }

    vector<int> sieve(max_num + 1, 1);
    sieve[0] = 0;
    sieve[1] = 0;

    for (int i = 2; i <= sqrt(max_num); i++) {
        if (sieve[i] == 1) {
            for (int j = i * i; j <= max_num; j += i) {
                sieve[j] = 0;
            }
        }
    }

    vector<int> prime_arr;

    for (int i = 2; i < sieve.size(); i++) {
        if (sieve[i]) {
            prime_arr.push_back(i);
        }
    }

    set<int> check;

    for (int i = 0; i < nums.size(); i++) {
        for (int j = 0; j < prime_arr.size(); j++) {
            if (nums[i] == prime_arr[j] || nums[i] % prime_arr[j] == 0) {
                check.insert(prime_arr[j]);
            }
        }
    }

    return check.size();
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << distinctPrimeFactors(nums) << endl;

    return 0;
}
