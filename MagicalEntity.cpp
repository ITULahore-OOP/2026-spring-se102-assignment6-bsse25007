#include "MagicalEntity.h"

// Constructor initializes mana pool and spell power
MagicalEntity::MagicalEntity(int mp, int sp) {
    manaPool   = mp;
    spellPower = sp;
}

// Returns the entity's mana pool value
int MagicalEntity::getMana() const {
    return manaPool;
}

// Returns the entity's spell power value
int MagicalEntity::getSpellPower() const {
    return spellPower;
}