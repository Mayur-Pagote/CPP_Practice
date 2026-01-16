#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
// 6 1 2 4 3 2 7 5
int main () {
    int length;
    cin>>length;
    vector<int> arr;
    vector<int> check(length+1,0);
    for(int i = 1; i <= length; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    for(int j = 0; j < length; j++){
        check[arr[j]] += 1;
        if (check[arr[j]] > 1){
            cout<<arr[j];
            break;
        }
    }
    
}
