#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main () {
    string str;
    getline(cin, str);

    if (str.empty()) return 0;

    sort(str.begin(), str.end());

    int maxCount = 0, count = 0, i = 0;
    char c = str[0], maxChar = str[0];

    while (i < str.length()) {
        if (str[i] == c) {
            count++;
        }
        else {
            if (count > maxCount) {
                maxCount = count;
                maxChar = c;
            }
            c = str[i];     // move to new character
            count = 1;      // reset count
        }
        i++;
    }

    // check last character group
    if (count > maxCount) {
        maxCount = count;
        maxChar = c;
    }

    cout << maxChar << " " << maxCount;
}
