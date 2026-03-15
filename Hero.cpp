#include "Hero.h"

Hero::Hero(string hn,int h,int bp){  // Constructor initializes hero with name, health, and base power

heroName = hn;
health = h;
basePower = bp;
}

Hero::~Hero(){
    // Destructor no dynamic memory to free, the compiler handles the object cleanup automatically 

}


//Getter functions

//Returns the hero's name
string Hero:: getName() const {
    return heroName;
}

//Returns the hero's current health
int Hero:: getHealth() const {
    return health;
}

//Returns the hero's base power
int Hero:: getPower() const {
    return basePower;
}


void Hero:: takeDamage(int damage) {
if (health > 0) {
    if (damage < health) { //Ensures health doesn't go in negative as damage should be less than health
        health = health - damage; //Subtract damage from health
    }
}
}

// Returns true if this hero's power is greater than the other hero's power
bool Hero:: operator>(const Hero &other) {
    if (basePower > other.basePower) {
        return true;
    }
    else return false;
}

// Returns the sum of both heroes' health values
int Hero:: operator+(const Hero &other){
    return health + other.health; //Adds the two heroes health
}

