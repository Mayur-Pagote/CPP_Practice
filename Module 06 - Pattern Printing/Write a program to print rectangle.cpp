#include <iostream>
using namespace std;
#include <cmath>

int main() {
    // Write a program to print rectangle.
    int row, col;
    cout<<"Enter a number of rows: ";
    cin>>row;

    cout<<"Enter number of columns: ";
    cin>>col;

    for (int i = 1; i<= row; i++){
        for (int j = 1; j <= col ;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
