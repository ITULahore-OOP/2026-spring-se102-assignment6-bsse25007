
#ifndef WARRIOR_H
#define WARRIOR_H
#include "Hero.h"
#include <iostream>
using namespace std;

class Warrior : public Hero {
    int armorRating; //Initialize armorRating of type int

public:
    // Constructor takes all Hero parameters plus an armor rating
    Warrior(string hn, int h, int bp, int ar);

    // Returns the armor rating of this warrior
    int getArmor() const;

    // Calculates effective health: health + (armorRating * 2)
    int calculateEffectiveHealth();
};










#endif