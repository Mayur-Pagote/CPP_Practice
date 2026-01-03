#include <iostream>
using namespace std;

void display (int arr[]){
    int length = 5;
    for ( int i = 0; i < length; i++ ){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
}

void change(int arr[]){
    arr[0] = 1239;
}

int main () {
    int arr[5] = {3,2,5,6,6};
    display(arr);
    change(arr);
    display(arr);
}
