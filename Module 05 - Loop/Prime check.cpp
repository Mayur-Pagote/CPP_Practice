#include <iostream>
using namespace std;

int main() {
    int num, i = 2;
    cout<<"Enter a number: ";
    cin>>num;
    while (true){
        if (i > num/2){
            cout<<"Number is prime";
            break;
        }
        else {
            if (num%i == 0){
                cout<<"Number is not prime";
                break;
            }
        }
        i += 1;
    }
}
