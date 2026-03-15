
#ifndef MAGICALENTITY_H
#define MAGICALENTITY_H

#include <iostream>
using namespace std;

class MagicalEntity {
    int manaPool;    // Total mana available 
    int spellPower;  // Determines how strong the entity's spells are

public:
    // Constructor  sets mana pool and spell power
    MagicalEntity(int mp, int sp);

    // Returns the entity's current mana pool
    int getMana() const;

    // Returns the entity's spell power
    int getSpellPower() const;
};











#endif