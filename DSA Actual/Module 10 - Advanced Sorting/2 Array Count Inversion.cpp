#include <iostream>
#include <vector>
using namespace std;


int main () {
    vector <int> arr1 = {3,5,6,7};
    vector <int> arr2 = {2,2,3,4};
    int count = 0;
    int i = 0 , j = 0 ;
    int l1 = arr1.size(), l2 = arr2.size();
    while (i < arr1.size() || j < arr2.size()){
        if (arr1[i] > arr2[j]){
            count += l1-i;
            j += 1;
        }
        else {
            i += 1;
        }
    }
    cout<<count;
}
