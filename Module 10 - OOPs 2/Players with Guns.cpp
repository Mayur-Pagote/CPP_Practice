#include <iostream>
using namespace std;

class Gun {
    public:
    int ammo;
    int damage;
};

class Player {
private:
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;

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
    Gun getGun(){
        cout<<"Gun ammo is: "<<gun.ammo<<endl; 
        cout<<"Gun damage is: "<<gun.damage<<endl;
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
    void setGun(Gun gun){
        this->gun = gun;
    }
};



int predictWin(Player a, Player b){
    if (a.getHealth() > b.getHealth()) return a.getHealth();
    else b.getHealth();
}



int main () {

    Player cheese;
    Player burger;

    Gun akm;
    akm.ammo = 100;
    akm.damage = 20;

    Gun awm;
    awm.ammo = 10;
    awm.damage = 120;

    cheese.setAge(12);
    cheese.setHealth(100);
    cheese.setScore(20);
    cheese.setisAlive(true);
    cheese.setGun(akm);

    burger.setAge(22);
    burger.setHealth(90);
    burger.setScore(200);
    burger.setisAlive(true);
    burger.setGun(awm);


    cout<<predictWin(cheese, burger)<<endl;

    burger.getGun();
    
}
