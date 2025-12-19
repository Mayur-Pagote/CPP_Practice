#include <iostream>
using namespace std;


class Vehicle {
public:
    int wheel;
    char model;

    void showDetails () {
        cout<<"Your vehicle has "<<wheel<<" wheels"<<endl;
        cout<<"Mode is "<<model<<endl;
    }
};

class Car : public Vehicle {
public:
    int seats;
    int engine;
};


class Bike : public Vehicle {
public:
    int shockups;
    
};


int main() {

    Car swift;
    swift.wheel = 4;
    swift.engine = 2;
    swift.model = 'C';
    swift.seats = 4;

    swift.showDetails();

    Bike BMW;
    BMW.wheel = 2;
    BMW.shockups = 5;
    BMW.model = 'B';
    BMW.showDetails();

}
