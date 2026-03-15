#include "Spellblade.h"

// Constructor initialize Warrior part and MagicalEntity part using member initializer list
Spellblade::Spellblade(string hn, int h, int bp, int ar, int mp, int sp)
    : Warrior(hn, h, bp, ar), MagicalEntity(mp, sp)
{
    // All initialization is handled by the member initializer list 
}

// Hybrid damage = physical power + spell power
int Spellblade::calculateHybridDamage() {
    int hybridDamage = getPower() + getSpellPower();
    return hybridDamage;
}