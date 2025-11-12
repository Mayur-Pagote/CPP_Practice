#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;

    cout<<"Enter second number: ";
    cin>>num2;

    char ch;
    cout<<"Enter operator: ";
    cin>>ch;

    switch (ch)
    {
    case '+':
        /* code */
        cout<<"Addition is: "<<num1 + num2;
        break;
    
    case '-':
        /* code */
        cout<<"Substraction is: "<<num1 - num2;
        break;
    
    case '/':
        /* code */
        cout<<"Division is: "<<num1 / num2;
        break;
    
    case '*':
        /* code */
        cout<<"Multiplication is: "<<num1 * num2;
        break;

    default:
        break;
    }

}
