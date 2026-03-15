#ifndef HERO_H
#define HERO_H
#include <iostream>
using namespace std;

class Hero {
    
    string heroName;  // The name of the hero
    int health;       // Current health points
    int basePower;    // Base attack power of the hero

public:
    // Constructor initializes name, health, and base power
    Hero(string hn, int h, int bp);

    // Destructor called when the hero object is destroyed
    ~Hero();

    // Getter functions
    string getName() const;   // Returns the hero's name
    int getHealth() const;    // Returns current health
    int getPower() const;     // Returns base power

    // Reduces hero's health by the given damage amount
    void takeDamage(int damage);

    // Returns true if this hero has more power than other
    bool operator>(const Hero &other);

    // Returns the combined health of two heroes
    int operator+(const Hero &other);
};









#endif