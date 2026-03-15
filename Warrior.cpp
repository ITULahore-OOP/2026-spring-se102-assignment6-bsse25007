#include "Warrior.h"

// Constructor passes name, health, power to Hero, then sets armorRating
Warrior::Warrior(string hn, int h, int bp, int ar) : Hero(hn, h, bp) {
    armorRating = ar;
}

// Returns the warrior's armor rating
int Warrior::getArmor() const {
    return armorRating;
}

// Effective health formula: base health + (armor * 2)
int Warrior::calculateEffectiveHealth() {
    int effectiveHealth = getHealth() + (armorRating * 2);
    return effectiveHealth;
}