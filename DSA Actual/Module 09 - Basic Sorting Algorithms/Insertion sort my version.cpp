#include <iostream>
#include <vector>
using namespace std;
void displayVec(vector<int> arr){
    for(int i =0 ; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

int main () {
    vector<int> arr = {3,2,8,6,4,1};
    int idx = 1;

    while (idx<arr.size()){
        int temp = idx;
        while (temp > 0){
            if (arr[temp] < arr[temp-1]){
                swap (arr[temp],arr[temp-1]);
            }
            temp -= 1; 
        }
        idx += 1;
    }
    displayVec(arr);
}
