#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    vector<int> arr ;
    int length;
    cin>>length;

    for (int k = 0 ; k<length; k++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end());

    int suffixSum = 0;
    int maxSum = 0;

    for (int i = arr.size() - 1; i >= 0; i--) {

        suffixSum += arr[i];

        if (suffixSum > 0) {
            maxSum += suffixSum;
        }
        else {
            break;
        }
    }

    cout << maxSum;
}
