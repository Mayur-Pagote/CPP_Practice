#include <iostream>

using namespace std;


int main () {
    int arr[10] = {0, 1,2,4,5,6,7,8,9,10};
    int check;

    for (int i = 0 ; i<10; i++){
        if (i != arr[i]) {
            check = i;
            break;
        }
    }

    cout<<"Missing element is: "<<check; 
}
