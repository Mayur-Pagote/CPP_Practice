#include <iostream>
using namespace std;


class Player {
private:
    int health;
    int age;
    int score;
    bool alive;

public:
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    bool isAlive(){
        return alive;
    }
    void setHealth(int health){
        this->health = health;
    }
    void setAge(int a){
        age = a;
    }
    void setScore(int s){
        score = s;
    }
    void setisAlive(bool al){
        alive = al;
    }
};



int predictWin(Player a, Player b){
    if (a.getHealth() > b.getHealth()) return a.getHealth();
    else b.getHealth();
}



int main () {

    Player cheese;
    Player burger;

    cheese.setAge(12);
    cheese.setHealth(100);
    cheese.setScore(20);
    cheese.setisAlive(true);

    burger.setAge(22);
    burger.setHealth(90);
    burger.setScore(200);
    burger.setisAlive(true);


    cout<<predictWin(cheese, burger);
    
}
