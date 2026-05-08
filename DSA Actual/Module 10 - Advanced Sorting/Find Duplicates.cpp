#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector <int> arr;

    int user;
    cin>>user;

    for (int j = 0 ; j < user+1; j++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    
    int length = arr.size();
    int  i = 0;
    while (i < length) {
        int cIdx = arr[i]-1;
        if (arr[i] != i+1){
        if (arr[cIdx] == arr[i]) {
            cout<<arr[i];
            break;
        }
        else {
            swap(arr[cIdx], arr[i]);
            i += 1;
        }
        }
        else i+=1;
    }
}
