#include <iostream>
using namespace std;

int main() {
    int num, count = 1;
    cout<<"Enter a number: ";
    cin>>num;
    
    for (int i = 1; i<=num; i++) count *= i;
    cout<<"Factorial is "<<count;
}
