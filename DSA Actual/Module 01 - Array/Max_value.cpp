#include <iostream>
using namespace std;


int main () {
    int arr[10] = {5,56,236,7,3,2,4,5,6,45};

    int max_vl = arr[0];

    int length = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0 ; i < length ; i++) {
        if (max_vl < arr[i] ) max_vl = arr[i];
    }

    cout<<"Max value is: "<<max_vl;
}
