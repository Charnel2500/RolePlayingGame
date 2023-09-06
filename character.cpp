#include "character.h"
#include <iostream>

Character::Character(const std::string& name, int level, int health, int attack, int defense)
    : name(name), level(level), health(health), attack(attack), defense(defense) {}

Character::~Character() {}

void Character::attackAct() {
    std::cout << name << " use basic attack!" << std::endl;
}
