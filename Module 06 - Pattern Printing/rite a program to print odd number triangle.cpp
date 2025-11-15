#include <iostream>
using namespace std;
#include <cmath>

int main() {
    // Write a program to print odd number triangle.
    int num;
    cout<<"Enter number: ";
    cin>>num;


    for (int i = 1; i<= num; i++){
        int a = 1;
        for (int j = 1; j <= i ;j++){
            cout<<a;
            a+=2;
        }
        cout<<endl;
    }

}
