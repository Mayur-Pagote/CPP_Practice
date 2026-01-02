#include <iostream>
using namespace std;


int main () {
    int arr[10] = {5,56,236,7,3,2,4,5,6,45};

    int min_vl = arr[0];

    int length = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0 ; i < length ; i++) {
        if (min_vl < arr[i] ) min_vl = arr[i];
    }

    cout<<"Min value is: "<<min_vl;
}
