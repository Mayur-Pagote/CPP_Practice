#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
// 6 1 2 4 3 5 7 5
int main () {
    int length;
    cin>>length;
    vector<int> arr;
    int count = 0;
    for(int i = 1; i <= length; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    for(int j = 0; j < length; j++){
        count += arr[j];
    }

    cout<<count - (length*(length-1))/2 ;
    
}
