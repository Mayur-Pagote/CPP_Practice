#include <iostream>
using namespace std;

class A {
public:
    int a;
    void show() {
        cout<<"A info";
    }
};


class B : public A{
public:
    int b;
    void show() {
        cout<<"b info";
    }
};


int main () {

    B nexl;
    nexl.show();

}
