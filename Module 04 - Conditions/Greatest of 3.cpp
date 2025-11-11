#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int num1, num2, num3;

    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"Enter third number: ";
    cin>>num3;

    if (num1>num2 && num1>num3){
        cout<<"Number "<<num1<<" is greater.";
    }
    else if (num2>num1 && num2>num3){
        cout<<"Number "<<num2<<" is greater.";
    }
    else {
        cout<<"Number "<<num3<<" is greater.";
    }
}
