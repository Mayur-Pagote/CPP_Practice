#include <iostream>
using namespace std;

class Bike {
    public:
    int wheels;

    Bike (int wheels) {
        this->wheels = wheels;
        cout<<"Value added successfuly";
    }

};

int main() {

    Bike BMW (4);


}
