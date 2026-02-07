#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &s){
    int size = s.size();
    while (true){
        int count = 0;
        for (int i = 1 ; i < size ; i++){
            if (s[i] < s[i-1]){
                swap(s[i], s[i-1]);
                count += 1;
            }
        }
        if (count <= 0) break;
        size -= 1;
    }
}

void displayVec(vector<int> arr){
    for(int i =0 ; i < arr.size(); i++){
        cout<<arr[i];
    }
}

int main () {
    vector<int> arr= {0,1,2,0,4,3,0,0,5};
    int size = arr.size();
    while (true){
        int count = 0;
        for (int i = 1 ; i < size;i++){
            if (arr[i-1] == 0 && arr[i] != arr[i-1]) {
                swap(arr[i],arr[i-1]);
                count += 1;
            }
        }
        if (count<=0) break;
        size -= 1;
    }
    displayVec(arr);
}
