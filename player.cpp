#include "player.h"
#include <iostream>

Player::Player(const std::string& name, int level, int health, int attack, int defense, int experience)
    : Character(name, level, health, attack, defense), experience(experience) {
    className = "Player";
    baseHealth = health;
}

void Player::attackAct() {
    std::cout << "Player " << name << " attacks for " << attack << " damage!" << std::endl;
}

std::string Player::getClassName() const {
    return className;
}

int Player::getAttack() const {
    return attack;
}

int Player::getHealth() const {
    return health;
}

void Player::takeDamage(int monsterDamage) {
    health -= monsterDamage;
}

void Player::resetHealth() {
    health = baseHealth;
}

void Player::gainExperience(int monsterXpReward) {
    experience += monsterXpReward;
}
