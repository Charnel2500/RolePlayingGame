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
        player.attackAct();
        monster.takeDamage(playerDamage);
        std::cout << "Player dealt " << playerDamage << " damage!" << std::endl;
        sleep(2);
        
        monster.attackAct();
        player.takeDamage(monsterDamage);
        std::cout << "Monster dealt " << monsterDamage << " damage!" << std::endl;
        sleep(2);
    }
    if (player.getHealth() <= 0) {
        displayGameOverMessage();
    } else {
        player.resetHealth();
        player.gainExperience(monster.getXPReward());
        std::cout << "Player won and gain " << monster.getXPReward() << " XP!" << std::endl;

    }
}


