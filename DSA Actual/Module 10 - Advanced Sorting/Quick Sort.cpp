#include <iostream>
#include <vector>
using namespace std;

int partition (vector<int> &arr, int si, int ei){
    int stEle = arr[si];
    int count = 0;

    for (int i = si+1 ; i <= ei; i++){
        if (stEle >= arr[i]  ) count += 1;
    }

    int pivot = count+si;
    swap (arr[si], arr[pivot]);

    int i = si, j = ei;

    while (i < pivot && j > pivot){
        if (arr[i] <= stEle) i+=1;
        else if (arr[j] > stEle) j-=1;
        else if (arr[i] > stEle && arr[j] < stEle) {
            swap(arr[i], arr[j]);
            i+=1;
            j-=1;
        } 
    }

    return pivot;
}

void quicksort (vector<int> &arr, int si, int ei){
    if (si>= ei) return;
    int pi = partition(arr,si,ei);


    quicksort(arr, si, pi-1);
    quicksort(arr, pi+1, ei);


}

int main () {
    vector <int> arr = {4,6,3,8,2,8,1};
    int length = arr.size();
    quicksort(arr, 0 , length-1 );
    for (int i = 0 ; i < length; i++){
        cout<<arr[i]<<" ";
    }
}
