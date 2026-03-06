#include <iostream>
using namespace std;

void reve (int arr[], int start, int end){
    int temp, i = start, j = end;

    while (i < j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j -= 1;
        i += 1;
    }
}


int main () {
    int arr[10] = {3,4,2,7,3,1,34,2,56,221};
    int length = 10;
    int rota  = 1;
    int part1 = length - rota;
    reve(arr, 0, part1-1);
    reve (arr, part1, length-1);
    reve(arr, 0, length-1);

    for(int i = 0 ; i < length; i++){
        cout<<arr[i]<<" ";
    }
}
