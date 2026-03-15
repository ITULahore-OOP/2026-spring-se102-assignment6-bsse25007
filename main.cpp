#include <iostream>
#include <string>
#include "Hero.h"
#include "Warrior.h"
#include "Knight.h"
#include "Spellblade.h"
#include "Guild.h"

using namespace std;

int main() {

    // Create a guild
    Guild g("Fellowship");

    // Create one of each hero type
    Hero h1("Aragorn", 100, 50);
    Warrior w1("Gimli", 120, 45, 10);
    Knight k1("Lancelot", 150, 60, 20, 25);
    Spellblade sb1("Gandalf", 110, 40, 5, 200, 80);

    int choice;

    do {
        // Display menu
        cout << "\n--- ASSIGNMENT 6 ---" << endl;
        cout << "1. Add hero to guild" << endl;
        cout << "2. Show guild stats" << endl;
        cout << "3. Show guild roster" << endl;
        cout << "4. Show warrior effective health" << endl;
        cout << "5. Show knight burst damage" << endl;
        cout << "6. Show spellblade hybrid damage" << endl;
        cout << "7. Compare hero powers" << endl;
        cout << "8. Combine hero health" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

            case 1: {
                // Ask user which hero to add
                cout << "Which hero to add? (1=Aragorn, 2=Gimli, 3=Lancelot, 4=Gandalf): ";
                int pick;
                cin >> pick;

                if (pick == 1) g += &h1;
                else if (pick == 2) g += &w1;
                else if (pick == 3) g += &k1;
                else if (pick == 4) g += &sb1;
                else cout << "Invalid choice!" << endl;
                break;
            }

            case 2: {
                // Display guild stats
                g.displayGuildStats();
                break;
            }

            case 3: {
                // Print full roster using overloaded << operator
                cout << g;
                break;
            }

            case 4: {
                // Effective health = health + (armor * 2)
                cout << w1.getName() << " effective health: " << w1.calculateEffectiveHealth() << endl;
                break;
            }

            case 5: {
                // Burst damage = power + charge bonus
                cout << k1.getName() << " burst damage: " << k1.calculateBurstDamage() << endl;
                break;
            }

            case 6: {
                // Hybrid damage = power + spell power
                cout << sb1.getName() << " hybrid damage: " << sb1.calculateHybridDamage() << endl;
                break;
            }

            case 7: {
                // Compare two heroes using overloaded > operator
                if (h1 > w1) {
                    cout << h1.getName() << " is more powerful!" << endl;
                } else {
                    cout << w1.getName() << " is more powerful!" << endl;
                }
                break;
            }

            case 8: {
                // Add health of two heroes using overloaded + operator
                int combined = h1 + w1;
                cout << "Combined health of " << h1.getName() << " and " << w1.getName() << ": " << combined << endl;
                break;
            }

            case 0: {
                cout << "Exiting..." << endl;
                break;
            }

            default: {
                cout << "Invalid choice, try again." << endl;
                break;
            }
        }

    } while (choice != 0);

    return 0;
}