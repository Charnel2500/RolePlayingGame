#include "combat_system.h"
#include "player.h"
#include "monster.h"
#include "ui_functions.h"
#include "iostream"
#include <unistd.h>

void battle(Player& player, Monster& monster) {
    float playerDamage = player.getAttack()-0.5*player.getDefense();
    float monsterDamage = monster.getAttack()-0.5*monster.getDefense();

    while (player.getHealth() > 0 && monster.getHealth() > 0) {
        int choice;
        do {
            std::cout << "What do you want to do? 1 - Basic attack; 2 - Using a skill." << std::endl;
            std::cin >> choice;
            std::cout << player.getHealth() << std::endl;
            if (choice == 1) 
            {
                player.attackAct();
                monster.takeDamage(playerDamage);
                std::cout << "Player dealt " << playerDamage << " damage!" << std::endl;
                sleep(2);
                
                monster.attackAct();
                int actualDamage = player.takeDamage(monsterDamage);
                std::cout << "Monster dealt " << actualDamage << " damage!" << std::endl;
                sleep(2);
            }
            else if (choice == 2)
            {
                player.firstSkill(); 
                
                monster.attackAct();
                int actualDamage = player.takeDamage(monsterDamage);
                std::cout << "Monster dealt " << actualDamage << " damage!" << std::endl;
                sleep(2);
            }
            else
                std::cout << "Wrong number! Try again!" << std::endl;
        } while (choice != 1 || choice != 2);

    }
    if (player.getHealth() <= 0) {
        displayGameOverMessage();
    } else {
        player.resetHealth();
        player.resetAttack();
        player.resetDefense();

        player.gainExperience(monster.getXPReward());
        std::cout << "Player won and gain " << monster.getXPReward() << " XP!" << std::endl;
        player.levelUp();
    }
}

void continueJourney(Player& player) {
    int choice;
    do
    {
        std::cout << "What do you want to do right now? 1. Show stats. 2. Continue journey." << std::endl;
        std::cin >> choice;
        if (choice == 1)
            showStats(player);
        else if (choice == 2)
        {
            std::cout << "Let's continue journey!" << std::endl;
            sleep(2);
            break;
        }
        else
            std::cout << "Wrong choice! Try again. 1. Show stats. 2. Continue journey." << std::endl;
    } while (choice != 1 || choice != 2);
}

void showStats(Player& player) {
    std::cout << "You statistics. Name: " << player.getName() << "." << std::endl;
    std::cout << "You statistics. Class: " << player.getClassName() << "." << std::endl;
    std::cout << "You statistics. Level: " << player.getLevel() << "." << std::endl;
    std::cout << "You statistics. Health: " << player.getHealth() << "." << std::endl;
    std::cout << "You statistics. Attack: " << player.getAttack() << "." << std::endl;
    std::cout << "You statistics. Defense: " << player.getDefense() << "." << std::endl;
    std::cout << "You statistics. XP: " << player.getExperience() << "." << std::endl;
}

