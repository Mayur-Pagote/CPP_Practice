#include <iostream>
#include <vector>

using namespace std;


int main () {
    vector<int> arr={5,3,2,6,7,3,1,8,9,0};
    int max, max2, max3;
    max =  max2 =  max3 = arr[0];

    for ( int i = 0 ; i < arr.size() ; i++){
        if (arr[i] > max){
            max3 = max2;
            max2 = max;
            max = arr[i];
        }
        else if (arr[i] > max2){
            max2 = max2;
            max2 = arr[i];
        }
        else if (arr[i] > max3){
            max3 = arr[i];
        }
    }

    cout<<max<<" "<<max2<<" "<<max3<<" ";

}
