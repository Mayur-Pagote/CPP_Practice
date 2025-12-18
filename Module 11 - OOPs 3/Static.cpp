#include <iostream>
using namespace std;


void function () {
    static int x = 10;
    cout<<"The number is: "<<x<<endl;
    x++;
}


int main() {
    function();
    function();
}
