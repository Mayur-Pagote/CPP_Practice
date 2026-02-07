#include <iostream>
#include <vector>
using namespace std;

void displayVector(vector<int> arr){
    for(int i =0 ; i < arr.size(); i++){
        cout<<arr[i];
    }
}

int main () {
    vector<int> arr = {1,2,3,4,5};
    int size = arr.size();
    bool flag = true;
    for (int i = 1 ; i < size ; i++){
        if (arr[i] < arr[i-1]) {
            flag = false;
            break;
        }
    }

    if (flag) cout<<"Sorted";
    else cout<<"Not sorted";
}
