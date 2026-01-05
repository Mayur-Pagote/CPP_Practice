#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;
    cin >> size;

    vector<int> arr(size);

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int i = 0, j = size - 1;
    while (i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    for (int k = 0; k < size; k++) {
        cout << arr[k] << " ";
    }

    return 0;
}
