#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>


class Fighter{
private:
    int health;
public:
    int GetHealth(){return health;}
    int SetHealth(int health){this->health = health;}
    void ToString();
    Fighter(int);
    Fighter();
    ~Fighter();
};

void Fighter::ToString(){
    std::cout << health << " Health\n";
}

Fighter::Fighter(int health){
    this->health = health;
}

Fighter::Fighter(){
    this->health = 100;
}
Fighter::~Fighter(){
    std::cout << "Destroyed Character\n";
}

// -- -- --

class Character: public Fighter{
private:
    int damage;
    std::string name;
public:
    int GetDamage(){return damage;}
    std::string GetName(){return name;}
    void Stats();
    void Attack();
    Character(int, std::string);
    Character();
};

Character::Character(int damage, std::string name){
    this->damage = damage;
    this->name = name;
}

Character::Character(){
    this->damage = 1;
    this->name = "Pepega";
}

void Character::Stats(){
    std::cout << this->GetName() << " Deals " << this->GetDamage() << " Damage and has " << this->GetHealth() << " Health\n";
}

void Character::Attack(){
    std::cout << this->GetName() << " Attacked and dealed " << this->GetDamage() << " Damage\n";
}

// -- -- --


int main(int argc, char **argv)
{
    Character Bob(1, "Bob Sewer");
    Character Pepega(2, "Pepega");
    Bob.Stats();
    Pepega.Stats();
    while(Bob.GetHealth() > 0 && Pepega.GetHealth() > 0){
        Pepega.SetHealth(Pepega.GetHealth()-Bob.GetDamage());
        Bob.Attack();
        Pepega.ToString();
        std::cout << "\n";
        
        Bob.SetHealth(Bob.GetHealth()-Pepega.GetDamage());
        Pepega.Attack();
        Bob.ToString();
        std::cout << "\n\n";
    }
    
	return 0;
}
