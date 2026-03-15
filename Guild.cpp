#include "Guild.h"

// Constructor sets guild name and initializes all roster slots to nullptr
Guild::Guild(string gn) {
    guildName   = gn;
    memberCount = 0; // Initialize to 0 to avoid garbage values

    // Set all roster slots to null so no dangling pointers exist
    for (int i = 0; i < 15; i++) {
        roster[i] = nullptr;
    }
}

// Destructor prints a message when the guild object is destroyed
Guild::~Guild() {
    cout << "The guild " << guildName << " has been disbanded!" << endl;
}

// Adds a new hero to the roster using the += operator
// Prints an error if the guild is already full 
void Guild::operator+=(Hero* newHero) {
    if (memberCount < 15) { // There's space to add a new hero
        roster[memberCount] = newHero;
        memberCount++;
    } else {
        cout << "Guild is at full capacity!" << endl; // No space left
    }
}

// Loops through all members and sums their power values
int Guild::calculateTotalGuildPower() const {
    int total = 0;
    for (int i = 0; i < memberCount; i++) {
        total += roster[i]->getPower();
    }
    return total;
}

// Displays a summary of the guild: name, member count, and total power
void Guild::displayGuildStats() const {
    cout << "Guild Name: " << guildName << endl;
    cout << "Total Members: " << memberCount << "/15" << endl;
    cout << "Total Guild Power: " << calculateTotalGuildPower() << endl;
}

// Outputs the guild name, member count, and full roster
ostream& operator<<(ostream& os, const Guild& g) {
    os << "Guild: " << g.guildName << endl;
    os << "Members: " << g.memberCount << endl;
    for (int i = 0; i < g.memberCount; i++) {
        // Print each member's name and power 
        os << "- " << g.roster[i]->getName()
           << " (Power: " << g.roster[i]->getPower() << ")" << endl;
    }
    return os;
}