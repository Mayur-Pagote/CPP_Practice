#include <iostream>
using namespace std;

int main() {
    int num1, rem, count=0, countdigit=0;
    cout<<"Enter a number: ";
    cin>>num1;

    while (num1 > 0){
        rem = num1%10;
        num1 /= 10;
        count += rem;
        countdigit += 1;
    }

    cout<<"sum is: "<<count<<endl;
    cout<<"Digits are: "<<countdigit;

}
