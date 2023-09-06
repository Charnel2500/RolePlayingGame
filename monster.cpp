#include "monster.h"
#include <iostream>

Monster::Monster(const std::string& name, int level, int health, int attack, int defense, int xpReward)
    : Character(name, level, health, attack, defense), xpReward(xpReward) {
}
Monster::~Monster() {}

void Monster::attackAct() {
    std::cout << name << " use basic attack!" << std::endl;
}

int Monster::getAttack() const {
    return attack;
}

int Monster::getHealth() const {
    return health;
}

int Monster::getDefense() const {
    return defense;
}

void Monster::takeDamage(int playerDamage) {
    health -= playerDamage;
}

int Monster::getXPReward() const {
    return xpReward;
}
