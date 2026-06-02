#include <iostream>
#include <cmath>
using namespace std;



int main () {
    int num = 49;
    for (int i = 1; i < (int)sqrt(num); i++){
        if (num%i == 0){
            cout<<i<<" ";
        }
    }
    for (int i = (int) sqrt(num); i >= 1; i--){
        if (num%i == 0){
            cout<<num/i<<" ";
        }
    }
}
