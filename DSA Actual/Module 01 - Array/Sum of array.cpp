#include <iostream>
using namespace std;

int main () {
    int nums[5];
    for (int i = 0; i<5; i++){
        cout<<"Enter nums: ";
        cin>> nums[i];
    }
    int length = sizeof(nums) / sizeof(nums[0]);
    int count = 0;
    for (int j = 0 ; j<length; j++){
         count += nums[j];
    }

    cout<<"Sum is : "<<count;

    
}
