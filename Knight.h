#ifndef KNIGHT_H
#define KNIFE_H  

#include "Warrior.h"
#include <iostream>
using namespace std;

class Knight : public Warrior {
    int chargeBonus; 

public:
    // Constructor: takes all Warrior parameters plus a charge bonus value
    Knight(string, int, int, int, int);

    // Returns the knight's charge bonus value
    int getChargeBonus() const;

    // Calculates burst damage: base power + charge bonus
    int calculateBurstDamage();
};










#endif