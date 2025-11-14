#include <iostream>
using namespace std;

int main() {
    int num, pow, count = 1;

    cout<<"Enter a number: ";
    cin>>num;

    cout<<"Enter power: ";
    cin>>pow;

    for (int i = 1; i<=pow; i++){
        count *= num;
    }

    cout<<count;


}
