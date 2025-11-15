#include <iostream>
using namespace std;
#include <cmath>

int main() {
    // Write a program to print square.
    int side;
    cout<<"Enter side: ";
    cin>>side;


    for (int i = 1; i<= side; i++){
        for (int j = 1; j <= side ;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
