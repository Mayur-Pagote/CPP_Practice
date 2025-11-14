#include <iostream>
using namespace std;

int main() {
    int num1, count = 0;

    cout<<"Enter a number: ";
    cin>>num1;

    for (int i = 1; i<=num1; i++){
        if (i%2 == 1) count += i;
        else count -= i;
    }

    cout<<count;


}
