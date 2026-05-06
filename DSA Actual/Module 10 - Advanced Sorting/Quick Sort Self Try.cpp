#include <iostream>
#include <vector>
using namespace std;

int partition (vector<int> &arr, int si, int ei){
    int startElement = arr[si];
    int count = 0;

    for (int i = si+1; i<=ei; i++){
        if (startElement >= arr[i]) count += 1;
    }

    int pivot = si+count;

    swap (arr[si], arr[pivot]);
    int i = si, j = ei;
    while (i < pivot && j > pivot){
        if (arr[i] <= startElement) i++;
        else if (arr[j] > startElement) j--;
        else if (arr[i] > startElement && arr[j] < startElement){
            swap(arr[i], arr[j]);
            i += 1;
            j -= 1;
        } 
       
    }
    return pivot;
}


void quicksort(vector<int> &arr, int si, int ei){

    if (si >= ei) return;

    int pivotIdx = partition(arr, si,ei);

    quicksort(arr, si, pivotIdx-1);
    quicksort(arr, pivotIdx+1, ei);


}

int main () {
    vector <int> arr = {4,6,3,8,2,8,1};
    int length = arr.size();
    quicksort(arr, 0, length-1);

    for (int i = 0 ; i < length ; i++){
        cout<<arr[i]<<" ";
    }
}
