#include <iostream>
#include <vector>
using namespace std;

void displayVector(vector<int> arr){
    for(int i =0 ; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

int main () {
    vector<int> arr;
    int size;
    cin>>size;
    for(int j = 0 ; j < size; j ++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int length = size;
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
    }
    displayVector(arr);

}
