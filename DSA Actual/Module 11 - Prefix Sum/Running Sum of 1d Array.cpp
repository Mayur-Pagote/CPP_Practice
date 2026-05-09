#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
    vector<int> arr;
    int user;
    cin>>user;
    for (int i = 0 ; i < user; i++){
        int temp ;
        cin>>temp;
        arr.push_back(temp);
    }
    
    for (int j = 1 ; j < user;j++){
        arr[j] = arr[j-1]+arr[j];
    }

    for (int j = 0 ; j < user;j++){
        cout<<arr[j]<<" ";
    }


	return 0;
}
