#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> arr){
    for (int i = 0 ; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}


int main () {
    vector<int> arr = {0,2,4,2,4,0,6,0,0,3,3,0};
    for (int i = 0 ; i < arr.size() ; i++){
        int j = arr.size()-1;
        int flag = 0;
        for(int j = 0; j < arr.size() ; j++){
            if ((arr[i] == arr[j]) && i != j) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            cout<<arr[i];
            break;
        }
    }

}
