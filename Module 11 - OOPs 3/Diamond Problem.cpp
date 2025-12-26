#include <iostream>
using namespace std;


class A {
public:
    int a_val;

};


class B : public A {
public:
    int b_val;
};


class C : public A {
public:
    int c_val;
};

class D : public A, public B {
public:
    int d_val;
};


int main() {

}
