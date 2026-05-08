#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<int> arr = {4,3,1,1};
    vector<int> missing;
    int i = 0;
    int length = arr.size();

    while (i < length){
        if (arr[i] == arr[arr[i] - 1]){
            i += 1;
        }
        else {
            swap(arr[i], arr[arr[i] - 1]);
        }
    }

    for (int i = 0 ; i < length ; i++){
        if (i+1 != arr[i]) missing.push_back(i+1);
    }

    for (int j  = 0 ; j < missing.size();j++){
        cout<<missing[j]<<" ";
    }

    
}
