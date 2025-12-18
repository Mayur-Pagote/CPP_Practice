#include <iostream>
using namespace std;

void CalculateArea(int s) {
    cout<<"Area of Square is: "<<s*s<<endl;
}

void CalculateArea(int l, int b) {
    cout<<"Area of rectangle is: "<<2*(l+b)<<endl;
}



int main() {

    CalculateArea(10);
    CalculateArea(12,32);

}
