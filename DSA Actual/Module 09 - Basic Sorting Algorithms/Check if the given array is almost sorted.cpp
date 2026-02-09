#include <iostream>
#include <vector>
using namespace std;
int main(){ 
    vector<int> arr = {2,1,35,76,453};
    for (int i = 0 ; i < arr.size()-1; i++){
        if (arr[i]>arr[i+1]) swap(arr[i], arr[i+1]);
        i += 1;
    }
    int j;
    for (  j = 0 ; j < arr.size()-1; j++){
        if (arr[j] > arr[j+1]) {
            cout<<"No";
            break;
        }
    }
    if (j == arr.size()-1) cout<<"Yes";

}
