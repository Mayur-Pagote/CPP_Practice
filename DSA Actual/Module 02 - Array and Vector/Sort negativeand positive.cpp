#include <iostream>
#include <vector>
using namespace std;

void npsort(vector<int> &v) {
    int i = 0, j = v.size() - 1;
    while (i < j) {
        if (v[i] < 0) i++;
        else if (v[j] >= 0) j--;
        else {
            swap(v[i], v[j]);  // fixed swap
            i++;
            j--;
        }
    }
}

int main() {
    int size;
    cin >> size;

    vector<int> v(size);
    for (int i = 0; i < size; i++) {
        cin >> v[i];
    }

    npsort(v);

    for (int i = 0; i < size; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
