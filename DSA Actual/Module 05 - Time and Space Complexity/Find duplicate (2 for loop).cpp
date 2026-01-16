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
    for(int i = 1; i <= length; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    for (int j = 0; j<length; j++){
        for (int k = j+1 ; k <length; k++){
            if (arr[j] == arr[k]){
                cout<<"found "<<arr[j];
                return 0;
            }
        }
    }
}
