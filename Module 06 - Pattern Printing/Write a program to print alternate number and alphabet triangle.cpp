#include <iostream>
using namespace std;

int main() {
    // Write a program to print alternate number and alphabet triangle.
    int num;
    cin>>num;


    for (int i = num; i>= 1; i--){
        if (i % 2 != 0){
        for (int j = 1; j <= i ;j++){
             cout<<j;
        }
    }
    
        else {
            for (int j = 1; j <= i ;j++){
             cout<<char (64+j);
        }

        }
        cout<<endl;
            
        }
        cout<<endl;
    

}
