#include <iostream>
#include <vector>
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


int main() {
	// your code goes here

    int size;
    cin>>size;
   
    int arr[size];

    for(int l = 0 ; l<size; l++){
        cin>>arr[l]; 
    }

    reve(arr, 1,4);

    for (int k = 0; k<size; k++){
        cout<<arr[k]<<" ";
    }

	return 0;
}
