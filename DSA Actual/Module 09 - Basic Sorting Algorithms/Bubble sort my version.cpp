#include <iostream>
#include <vector>
using namespace std;

void displayVector(vector<int> arr){
    for(int i =0 ; i < arr.size(); i++){
        cout<<arr[i];
    }
}

int main () {
    vector<int> arr = {5,4,3,2,1};
    int size = arr.size();
    int pass = 0, length = size;
    while (true){
        
        int count = 0;
        for(int i = 1 ; i < length ; i++){
            if (arr[i] < arr[i-1]) {
                swap(arr[i], arr[i-1]);
                count += 1;
            }
        }
        length -= 1;
        if (count <= 0) break;
        pass += 1;
    }
    cout<<pass;
    displayVector(arr);

}
