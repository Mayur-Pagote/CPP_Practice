#include <iostream>
using namespace std;


class Bike {
public:

    int wheels;
    int gears;
    char model;

    Bike (int w, int g, char m) : wheels(w), gears(g) , model(m){
        cout<<w<<g<<m<<endl;
    }


};


int main(){

    Bike BMW (2, 4,'B');

}
