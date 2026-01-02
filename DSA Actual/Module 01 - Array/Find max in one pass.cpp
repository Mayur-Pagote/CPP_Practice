#include <iostream>
#include <climits>

using namespace std;


int main () {
  
    int arr[10] = {3,2,4,7,8,3,23,4,5,20};
    int smax = INT_MIN ,max = INT_MIN;
    for (int i = 0 ; i < 10 ; i++){
        if (arr[i] > max) {
            smax = max;
            max = arr[i];
        }

        else if (arr[i] > smax && arr[i] < max) smax = arr[i];
    }

    cout<<max<<" "<<smax;
}
