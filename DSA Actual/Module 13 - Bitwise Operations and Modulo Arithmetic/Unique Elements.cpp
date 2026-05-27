#include <iostream>
#include <vector>
using namespace std;

int main () {

    int length;
    cin>>length;

    vector<int> arr;
    int temp;
    for (int i=0; i<length; i++){
        cin>>temp;
        arr.push_back(temp);
    }

    int res = arr[0];

    for (int i = 1; i < length; i++){
        res ^= arr[i];
    }

    cout<<res;

}
