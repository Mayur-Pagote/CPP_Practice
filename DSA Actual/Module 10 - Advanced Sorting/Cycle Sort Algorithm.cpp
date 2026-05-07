#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector <int> arr = {5,3,2,4,1};
    int i = 0 ;
    while (i < arr.size()){
        if (i+1 != arr[i]){
            swap(arr[i], arr[arr[i]-1]);
        }
        else {
            i += 1;
        }
    }

    for (int i = 0 ; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}
