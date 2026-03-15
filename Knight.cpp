#include "Knight.h"

// Constructor passes name, health, power, armor to Warrior, then sets chargeBonus
Knight::Knight(string hn, int h, int bp, int ar, int cb) : Warrior(hn, h, bp, ar) {
    chargeBonus = cb;
}

// Returns the knight's charge bonus 
int Knight::getChargeBonus() const {
    return chargeBonus;
}

// Burst damage = base power + charge bonus
int Knight::calculateBurstDamage() {
    int burstDamage = getPower() + chargeBonus;
    return burstDamage;
}