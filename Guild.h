#ifndef GUILD_H
#define GUILD_H
#include "Hero.h"
#include <iostream>
#include <string>
using namespace std;

class Guild {
    string guildName;      // The name of the guild
    Hero* roster[15];      // Array of pointers to heroes , max 15 members
    int memberCount;       // Tracks the current number of members

public:
    // Constructor sets the guild name and initializes the roster
    Guild(string gn);

    // Destructor prints a message when the guild is disbanded
    ~Guild();

    // Returns the sum of all guild members' power values
    int calculateTotalGuildPower() const;

    // Prints guild name, member count, and total power 
    void displayGuildStats() const;

    // Adds a hero pointer to the guild roster
    void operator+=(Hero*);

    // Prints full roster with names and powers
    friend ostream& operator<<(ostream&, const Guild&);
};

#endif