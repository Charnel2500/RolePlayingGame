#include "player.h"
#include <iostream>

Player::Player(const std::string& name, int level, int health, int attack, int defense, int experience)
    : Character(name, level, health, attack, defense), experience(experience) {}

void Player::attack() {
    std::cout << "Player " << name << " attacks for " << attack << " damage!" << std::endl;
}
