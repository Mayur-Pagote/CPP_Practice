#include <iostream>
#include <cmath>
using namespace std;



int main () {
    int num = 60;
    for (int i = 1; i <= (int)sqrt(num); i++){
        if (num%i == 0){
            cout<<i<<endl;
            cout<<num/i<<endl;
        }
    }
}
