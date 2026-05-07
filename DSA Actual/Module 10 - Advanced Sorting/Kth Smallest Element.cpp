#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int si, int ei){
    int firstEle = arr[si];
    int count = 0;

    for (int i = si+1; i <=ei; i++){
        if (firstEle>=arr[i]) count += 1;
    }

    int pivot = count + si;

    swap (arr[si], arr[pivot]);

    int i = si , j = ei;

    while (i < pivot && j > pivot){
        if (arr[i] <= firstEle ) i++;
        else if (arr[j] > firstEle) j-=1;
        else if (arr[i] > firstEle && arr[j] < firstEle) {
            swap(arr[i], arr[j]);
            i+=1;
            j -= 1;
        }
    }
    return pivot;
}

int kthSmallest(vector<int> &arr, int si,int ei,int k){

    int pi = partition(arr, si, ei);

    if (pi+1 == k) return arr[pi];

    if (pi + 1 < k) return kthSmallest(arr, pi+1, ei, k);
    else return kthSmallest(arr, si, pi-1, k);


}

int main () {
    vector<int> arr ;
    int find;
    int length;
    cin>>length;
    cin>>find;
    for (int i = 0 ; i < length; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<kthSmallest(arr, 0, length-1,find );


}
