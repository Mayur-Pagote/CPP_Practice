#include <iostream>

using namespace std;


int main () {
    int arr[10] = {3,2,4,7,8,3,23,4,5,6};
    int product = 1;

    for ( int  i = 0; i < 10 ; i++) {
        product *= arr[i];
    }

    cout<<"Product of array is: "<<product;
}
