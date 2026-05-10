#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<int> arr;
    int length;
    cin>>length;
    for (int k = 0 ; k < length;k++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    vector<int> prefix  (length , 1);
    vector<int> suffix  (length , 1);

    for (int i = 1 ; i < length ; i++){
        prefix[i] *= arr[i-1] * prefix[i-1];
        suffix[length-i-1] *= arr[length-i] * suffix[length-i];
    }

    for (int i = 0 ; i < length ; i++){
        arr[i] = prefix[i] * suffix[i];
    }

    for (int i = 0 ; i < length ; i++){
        cout<<arr[i]<<" ";
    }


    
}
