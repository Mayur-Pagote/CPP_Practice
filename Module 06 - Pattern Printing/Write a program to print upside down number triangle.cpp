#include <iostream>
using namespace std;

int main() {
    // Write a program to print upside down number triangle.
    int num;
    cin>>num;


    for (int i = num; i>= 1; i--){
        for (int j = i; j >= 1 ;j--){
            cout<<i;
            
        }
        cout<<endl;
    }

}
