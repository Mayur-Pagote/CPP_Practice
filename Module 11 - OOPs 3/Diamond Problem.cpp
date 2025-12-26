#include <iostream>
using namespace std;


class A {
public:
    int a_val;

};


class B : public A {
    int b_val;
};


class C : public A {
    int c_val;
};

class D : public A, public B {
    int d_val;
};


int main() {

}
