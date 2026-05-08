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
    vector <int> arr = {0,1,2};
    int  i = 0;
    int length = arr.size();

    while (i < arr.size()){
        if (arr[i]==length){
            i += 1;
        }
        else if (i != arr[i]){
            swap(arr[i], arr[arr[i]]);
        }
        else {
            i += 1;
        }

    }

    for (int  i = 0 ; i< arr.size(); i++){
        if (i != arr[i]) cout<<i;
    }
}
