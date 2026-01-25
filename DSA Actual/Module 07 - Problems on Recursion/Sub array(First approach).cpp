#include <iostream>
#include <vector>
using namespace std;

void printSlice(vector<int> arr, int start, int end) {
    for (int i = start; i < end; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void subs(int start, int end, vector<int> arr){
    if (start == arr.size() && end == arr.size()) return;
    if (start!=end) printSlice(arr, start, end);  
    if (end == arr.size()) {
        end = start+1;
        subs(start+1, end, arr);
    }
    else subs(start, end+1, arr);
}

int main () {
    vector<int> arr = {1,2,3};
    subs(0,0,arr);
}
