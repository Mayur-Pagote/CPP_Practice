#include <iostream>
using namespace std;

int main() {
    // Write a program to print number bridge.
    int num; 
    cin >> num;
    int count = 1;
    int var = (num * 2) - 1;

    for (int j = 1; j <= var; j++) cout << j;
    cout << endl;

    for (int i = 0; i < num - 1; i++) {
        for (int k = 1; k <= (var / 2) - i; k++) cout << k;
        for (int l = 1; l <= count; l++) cout << " ";
        for (int m = (var / 2) + i + 2; m <= var; m++) cout << m;
        count += 2;
        cout << endl;
    }

    return 0;
}
