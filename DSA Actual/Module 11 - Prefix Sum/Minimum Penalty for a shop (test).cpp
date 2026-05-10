#include <iostream>
#include <vector>
using namespace std;

int main() {
    string arr;
    cin >> arr;   // Take string input

    int length = arr.size();

    vector<int> prefix(length + 1, 0);
    vector<int> suffix(length + 1, 0);

    int yCount = 0, nCount = 0;

    // prefix
    for (int i = 1; i <= length; i++) {
        if (arr[i - 1] == 'N') {
            nCount += 1;
        }
        prefix[i] = nCount;
    }

    // suffix
    for (int i = length - 1; i >= 0; i--) {
        if (arr[i] == 'Y') {
            yCount += 1;
        }
        suffix[i] = yCount;
    }

    int minPen = arr.size();

    for (int k = 0; k < prefix.size(); k++) {
        prefix[k] += suffix[k];
        int pen = prefix[k];
        minPen = min(minPen, pen);
    }

    int check = 0;

    for (int l = 0; l < prefix.size(); l++) {
        if (minPen == prefix[l]) {
            cout << l;
            check = 1;
            break;
        }
    }

    if (check == 0)
        cout << length;

    return 0;
}
