#include <iostream>
using namespace std;
#include <cmath>

int main() {
    // Write a program to print out all Armstrong numbers between 1 and 500.
    int temp, count, rem;
    
    for (int i = 1; i <= 500; i++){
        temp = i;
        count=0;
        while (temp>0){
            rem = temp%10;
            count += pow(rem, 3);
            temp /= 10;
        }
        if (count == i) cout<<count<<endl;
    }

}
