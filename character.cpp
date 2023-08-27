#include "character.h"
#include <iostream>

Character::Character(const std::string& name, int level, int health, int attack, int defense)
    : name(name), level(level), health(health), attack(attack), defense(defense) {}

void Character::attackAct() {
    std::cout << name << " attacks for " << attack << " damage!" << std::endl;
}
