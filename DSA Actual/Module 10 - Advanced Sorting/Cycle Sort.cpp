#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector <int> arr;
    int length;
    cin>>length;

    for (int j = 0 ; j < length;j++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

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
