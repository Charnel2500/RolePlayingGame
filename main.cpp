#include <iostream>
#include "character.h"
#include "player.h"
#include "player_classes.h"
#include "monster.h"
#include "ui_functions.h"
#include "combat_system.h"

int main() {
    displayWelcomeMessage();
    std::string playerName;
    int chosenClass; 
    Player* chosenPlayer = nullptr; 

    std::cout << "Create your player:" << std::endl;

    std::cout << "Enter player's name: ";
    std::cin >> playerName;
    
    
    do {  
        classDescription();
        std::cout << "Choose your class (1 - Crusader, 2 - Berserker, 3 - Hunter, 4 - Druid, 5 - Sorcerer): ";
        std::cin >> chosenClass;
        if (chosenClass == 1)
            chosenPlayer = new Crusader(playerName, 1, 0);        
        else if (chosenClass == 2)
            chosenPlayer = new Berserker(playerName, 1, 0);
        else if (chosenClass == 3)
            chosenPlayer = new Hunter(playerName, 1, 0);
        else if (chosenClass == 4)
            chosenPlayer = new Druid(playerName, 1, 0);
        else if (chosenClass == 5)
            chosenPlayer = new Sorcerer(playerName, 1, 0);
        else
            std::cout << "Wrong choice." << std::endl;
    } while (chosenClass < 1 || chosenClass > 5);

    if (chosenPlayer) { 
        std::cout << "Player " << playerName << " created as " << chosenPlayer->getClassName() << "!" << std::endl;    
    }
    
    Monster* goblin = new Monster("Goblin", 3, 50, 15, 5, 50);
    firstFightGoblinDescription();
    battle(*chosenPlayer, *goblin);  
    continueJourney(*chosenPlayer);
    
    Monster* orc = new Monster("Orc", 5, 50, 15, 5, 70);
    fightOrcDescription();
    battle(*chosenPlayer, *orc);   
    continueJourney(*chosenPlayer);
    
    Monster* troll = new Monster("Troll", 10, 100, 20, 5, 100);
    fightTrollDescription();
    battle(*chosenPlayer, *troll);
    continueJourney(*chosenPlayer);
    
    Monster* ogre = new Monster("Ogre", 12, 80, 30, 5, 120);
    fightOgreDescription();
    battle(*chosenPlayer, *ogre);
    continueJourney(*chosenPlayer);
    
    delete chosenPlayer;
    chosenPlayer = nullptr;
    return 0;
}
