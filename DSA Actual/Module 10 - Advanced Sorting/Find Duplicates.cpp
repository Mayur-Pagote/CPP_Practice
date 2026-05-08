#include <iostream>
#include <vector>
using namespace std;

void cyclicSort(vector<int> &arr){
    int  i = 0;
    while (i < arr.size()){
        if (i+1 != arr[i]){
            swap(arr[i], arr[arr[i]-1]);
        }
        else{
            i += 1;
        }
    }
}

int main () {
    vector <int> arr = {3,3,3,3};
    
    int length = arr.size();
    int  i = 0;
    while (i < length) {
        int cIdx = arr[i];
        if (arr[cIdx] == arr[i]) {
            cout<<arr[i];
            break;
        }
        else {
            swap(arr[cIdx], arr[i]);
            i += 1;
        }
    }
}
