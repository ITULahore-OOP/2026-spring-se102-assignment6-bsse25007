#ifndef SPELLBLADE_H
#define SPELLBLADE_H

#include "MagicalEntity.h"
#include "Warrior.h"
#include <iostream>
using namespace std;

class Spellblade : public Warrior, public MagicalEntity {
public:
    // Constructor takes all Warrior parameterss + mana pool and spell power
    Spellblade(string hn, int h, int bp, int ar, int mp, int sp);

    // Hybrid damage = base power (from Warrior) + spell power (from MagicalEntity)
    int calculateHybridDamage();
};

#endif