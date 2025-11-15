#include <iostream>
using namespace std;
#include <cmath>

int main() {
    // Write a program to print upside down triangle.
    int num;
    cout<<"Enter number: ";
    cin>>num;


    for (int i = num; i>=1; i--){
        for (int j = 1; j <= i ;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
