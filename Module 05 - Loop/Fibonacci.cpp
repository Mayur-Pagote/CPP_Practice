#include <iostream>
using namespace std;

int main() {
    int num1 = 1, num2 = 1, sumnum;
    cout<<num1<<endl;
    cout<<num2<<endl;
    for (int i = 1; i<10; i++){
        sumnum = num1+num2;
        cout<<sumnum<<endl;
        num2 = num1;
        num1 = sumnum;
    }
}
