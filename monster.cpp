#include "monster.h"
#include <iostream>

Monster::Monster(const std::string& name, int level, int health, int attack, int defense, int xpReward)
    : Character(name, level, health, attack, defense), xpReward(xpReward) {}

void Monster::attack() {
    std::cout << "Monster " << name << " attacks for " << attack << " damage!" << std::endl;
}
