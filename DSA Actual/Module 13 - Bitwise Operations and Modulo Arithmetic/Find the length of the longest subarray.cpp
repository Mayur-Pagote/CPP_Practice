#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int find_max_pos(vector<int> arr){
    int max_val = arr[0];
    for (int i = 1 ; i < arr.size(); i++){
        if (max_val < arr[i]) {
            max_val = arr[i];
             
        }
    }
    return max_val;
}

int main () {
    int length;
    cin>>length;
    vector<int> arr;
    for (int j = 0 ; j < length; j++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int max_val = find_max_pos(arr);
    
    int max_len = 0;
    int count = 0;
    for (int i = 0; i<arr.size(); i++){
        if (arr[i] == max_val) {
            count += 1;
        }
        else {
            max_len = max(count, max_len);
            count = 0;
        }
    }
    cout<<max_len;

    
}
