#include <iostream>
using namespace std;


int main() {
    int x  = 1;
    int* pointer = &x;
    cout<<pointer<<endl;
    cout<<*pointer;
}
