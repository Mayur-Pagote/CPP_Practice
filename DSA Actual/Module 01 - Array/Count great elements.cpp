#include <iostream>

using namespace std;

int main () {
    int arr[10] = {3,54,2,4,6,34,23,35,56,34};

    int count = 0, num = 20;

    for (int i = 0; i<10 ;i++) {
        if (arr[i] > num) count += 1;
    }

    cout<<count;
}
