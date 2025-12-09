#include <iostream>
using namespace std;


int main() {
    int x;
    int* pointer = &x;

    cout<<"Enter a number: ";
    cin>>*pointer;

    cout<<*pointer<<" "<<x;
}
