#include "monster.h"
#include <iostream>

Monster::Monster(const std::string& name, int level, int health, int attack, int defense, int xpReward)
    : Character(name, level, health, attack, defense), xpReward(xpReward) {
}

void Monster::attackAct() {
    std::cout << "Monster " << name << " attacks for " << attack << " damage!" << std::endl;
}

int Monster::getAttack() const {
    return attack;
}

int Monster::getHealth() const {
    return health;
}

void Monster::takeDamage(int playerDamage) {
    health -= playerDamage;
}

int Monster::getXPReward() const {
    return xpReward;
}
