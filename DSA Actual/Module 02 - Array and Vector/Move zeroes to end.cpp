#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> arr){
    for (int i = 0 ; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}


int main () {
    vector<int> arr = {0,2,4,4,0,6,0,0,3,3,0};
    int i = 0, j = arr.size()-1;

    while (i<j){
        if (arr[i] == 0 && arr[j] != 0 ){
            swap(arr[i], arr[j]);
            i += 1;
            j -= 1;

        }
        else if (arr[i] != 0){
            i +=1;
        }
        else if (arr[j] == 0){
            j -= 1;
        }
    }
    
    display(arr);

}
