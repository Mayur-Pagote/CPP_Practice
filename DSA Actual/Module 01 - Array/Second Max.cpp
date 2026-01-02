#include <iostream>
#include <climits>

using namespace std;


int main () {
    int arr[10] = {5,56,236,7,3,2,4,5,6,45};

    int max_vl = arr[0], sec_max = INT_MIN;

    int length = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0 ; i < length ; i++) {
        if (max_vl < arr[i] ) max_vl = arr[i];
    }

    for (int i = 0 ; i < length ; i++) {
        if (max_vl>sec_max && sec_max<arr[i] && max_vl != arr[i]) sec_max = arr[i];
    }

    cout<<"Second Max value is: "<<sec_max;
}
