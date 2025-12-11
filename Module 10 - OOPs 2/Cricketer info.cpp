#include <iostream>
using namespace std;

class Cricketer{
    public:
    string name;
    int age;
    int totalMatches;
    int avgScore;
};

void getInfo(Cricketer player){
    cout<<"Name of the player is: "<<player.name<<endl;
    cout<<"Age is: "<<player.age<<endl;
    cout<<"Avg score with matches: "<<player.avgScore<<" and "<<player.totalMatches<<endl;
}

int main () {
    Cricketer cheese;
    cheese.name = "Cheese";
    cheese.age = 19;
    cheese.avgScore=39;
    cheese.totalMatches=8;

    Cricketer burger;
    burger.name = "Burger";
    burger.age = 29;
    burger.avgScore=79;
    burger.totalMatches=6;


    Cricketer team[2] = {cheese, burger};

    for (int i = 0; i<= 1; i++){
        getInfo(team[i]);
    }
}
