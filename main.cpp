#include <iostream>
#include "character.h"
#include "player.h"
#include "player_classes.h"
#include "monster.h"
#include "ui_functions.h"

int main() {
    displayWelcomeMessage();
    std::string playerName;
    int playerLevel, playerHealth, playerAttack, playerDefense, playerExperience, chosenClass;

    std::cout << "Create your player:" << std::endl;

    std::cout << "Enter player's name: ";
    std::cin >> playerName;
    
    std::cout << "Choose your class: ";
    std::cin >> chosenClass;
    
    while (chosenClass > 0 || chosenClass <=5) {
        std::cout << "Choose your class: ";
        std::cin >> chosenClass;
        if (chosenClass == 1)
            Crusader crusader(playerName, 1, 0);
        else if (chosenClass == 2)
            Berserker berserker(playerName, 1, 0);
        else if (chosenClass == 3)
            Hunter hunter(playerName, 1, 0);
        else if (chosenClass == 4)
            Druid druid(playerName, 1, 0);
        else if (chosenClass == 5)
            Sorcerer sorcerer(playerName, 1, 0);
        else
            std::cout << "Wrong choice." << std::endl;
    }

    std::cout << "Player " << playerName << " created!" << std::endl;
    
    Monster monster("Goblin", 3, 50, 15, 5, 50);
    

    
    monster.attackAct();

    displayGameOverMessage();
    return 0;
}
