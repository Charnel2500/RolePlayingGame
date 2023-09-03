#include "player.h"
#include <iostream>

Player::Player(const std::string& name, int level, int health, int attack, int defense, int experience)
    : Character(name, level, health, attack, defense), experience(experience) {
    className = "Player";
    baseHealth = health;
}

void Player::attackAct() {
    std::cout << "Player " << name << " use basic attack!" << std::endl;
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

int Player::getDefense() const {
    return defense;
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

void Player::levelUp(int healthIncrease, int attackIncrease, int defenseIncrease) {
    health += healthIncrease;
    attack += attackIncrease;
    defense += defenseIncrease;
    level++;
    std::cout << "Your character has leveled up, here are the current stats: " << std::endl;
    std::cout << "Health: " << health << " (+" << healthIncrease << ")." << std::endl;
    std::cout << "Attack: " << attack << " (+" << attackIncrease << ")." << std::endl;
    std::cout << "Defense: " << defense << " (+" << defenseIncrease << ")." << std::endl;
    std::cout << "Level: " << level << " (+1)." << std::endl;

}
