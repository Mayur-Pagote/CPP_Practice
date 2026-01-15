#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int count = 0, countTotal = 0;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u') {
            count++;
            countTotal += count;
        } else {
            count = 0;
        }
    }

    cout << countTotal;
    return 0;
}
