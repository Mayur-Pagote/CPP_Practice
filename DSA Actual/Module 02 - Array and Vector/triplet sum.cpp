#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> arr){
    for (int i = 0 ; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}


int main () {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int x = 10;   
    int len = arr.size();
    for(int i = 0 ; i<len ; i++){
        for ( int j = i+1 ; j < len; j++){
            for ( int k = j+1; k < len; k++){
                if(arr[i]+arr[j]+arr[k] == x)  cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
            }
        }
    }
    

}
