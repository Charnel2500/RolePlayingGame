#include "combat_system.h"
#include "player.h"
#include "monster.h"
#include "ui_functions.h"
#include "iostream"

void battle(Player& player, Monster& monster) {
    int playerDamage = player.getAttack();
    int monsterDamage = monster.getAttack();

    while (player.getHealth() > 0 && monster.getHealth() > 0) {
        player.attackAct();
        monster.takeDamage(playerDamage);
        
        monster.attackAct();
        player.takeDamage(monsterDamage);
    }
    if (player.getHealth() <= 0) {
        displayGameOverMessage();
    } else {
        player.resetHealth();
        player.gainExperience(monster.getXPReward());
        std::cout << "Player won and gain " << monster.getXPReward() << " XP!" << std::endl;

    }
}
