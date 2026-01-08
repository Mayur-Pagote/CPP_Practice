#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> arr){
    for (int i = 0 ; i < arr.size();i ++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void evenOdd(vector<int> &v){

    for (int i = 0; i<v.size(); i++){
        if (i % 2 != 0 )  v[i] = v[i] * 2;
        else  v[i] += 10;;
    }
    
}


int main () {

    vector<int> arr1 = {3,6,7,8,9,10,12};
    vector<int> arr2 = {1,2,3,4,3,5,6,7};
    evenOdd(arr1);
    evenOdd(arr2);
    display(arr1);
    display(arr2);
    
}

