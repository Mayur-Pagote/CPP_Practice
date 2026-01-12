#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
    vector< vector<int> > arr;
    int rows;
    cin>>rows;
    int cols;
    cin>>cols;

    for (int i = 0 ; i < rows; i++){
        vector<int> temp(cols);
        arr.push_back(temp);
        for (int j = 0; j < cols;j++){
            cin>>arr[i][j];
        }
    }
    int target, flag = 0;
    cin>>target;
    for (int i = 0; i <= rows-1 ;i++){
        if (arr[i][cols-1] >= target){
            for (int j = 0; j< cols; j++){
                if (arr[i][j] == target) {
                    flag = 1;
                    break;
                }
                if (flag == 1) break;
            }
        }
    }

    if (flag == 1) cout<<"Target "<<target<<" is in the matrix.";
    else cout<<"Target "<<target<<" is not in the matrix.";
	return 0;
}
