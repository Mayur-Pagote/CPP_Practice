#include <iostream>
#include <vector>
using namespace std;

void traverse(vector<int> arr, int start){
    if (arr.size() == start) return;
    cout<<arr[start]<<" ";
    traverse(arr, start+1);
}

int main () {
    vector<int> v= {1,2,3,4,5};
    traverse(v, 0);
}
