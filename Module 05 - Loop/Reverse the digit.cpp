#include <iostream>
using namespace std;

int main() {
    int num1, rem, count=0, countdigit=0;
    cout<<"Enter a number: ";
    cin>>num1;

    while (num1 > 0){
        rem = num1%10;
        num1 /= 10;
        count = (count*10) + rem;
        
    }

    cout<<"Reverse is: "<<count<<endl;


}
