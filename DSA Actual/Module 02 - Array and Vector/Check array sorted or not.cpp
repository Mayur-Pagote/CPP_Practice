#include <iostream>
#include <vector>
using namespace std;

int checkSort(vector<int> v){
    int flag = 1;
    for ( int i = 0 ;  i < v.size()-1 ; i++){
        if ( v[i] > v[i+1]) {
            flag  = 0;
            break ;
        }
    }
    return flag;
}


int main () {

    vector<int> arr1 = {3,6,7,8,9,10,12};
    vector<int> arr2 = {1,2,3,4,3,5,6,7};
    if (checkSort(arr1)) cout<<"Sorted"<<endl;
    else cout<<" not sorted"<<endl;

    if (checkSort(arr2)) cout<<"Sorted"<<endl;
    else cout<<" not sorted"<<endl;
    
}

