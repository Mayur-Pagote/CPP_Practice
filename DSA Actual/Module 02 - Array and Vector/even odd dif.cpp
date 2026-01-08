#include <iostream>
#include <vector>
using namespace std;

int evenOddDiff(vector<int> v){
    int even = 0;
    int odd = 0;

    for (int i = 0; i<v.size(); i++){
        if (i % 2 != 0 ) odd += v[i];
        else even += v[i];
    }
    return abs(even - odd);
}


int main () {

    vector<int> arr1 = {3,6,7,8,9,10,12};
    vector<int> arr2 = {1,2,3,4,3,5,6,7};
    cout<<evenOddDiff(arr1);
    cout<<evenOddDiff(arr2);
    
}

