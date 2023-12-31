#include "player.h"
#include <iostream>

Player::Player(const std::string& name, int level, int health, int attack, int defense, int experience)
    : Character(name, level, health, attack, defense), experience(experience) {
    className = "Player";
    baseAttack = attack;
    baseDefense = defense;
    baseHealth = health;
}
Player::~Player() {}

void Player::attackAct() {
    std::cout << "Player " << name << " use basic attack!" << std::endl;
}

std::string Player::getName() const {
    return name;
}

std::string Player::getClassName() const {
    return className;
}

int Player::getLevel() const {
    return level;
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

int Player::getExperience() const {
    return experience;
}

int Player::takeDamage(int monsterDamage) {
    int actualDamage = monsterDamage - defense;
    if (actualDamage < 0) {
        actualDamage = 1;  
    }
    health -= actualDamage;
    return actualDamage;
}

int Player::getBaseHealth() const {
    return baseHealth;
}

void Player::resetHealth() {
    health = baseHealth;
}

void Player::resetAttack() {
    attack = baseAttack;
}

void Player::resetDefense() {
    defense = baseDefense;
}

void Player::gainExperience(int monsterXpReward) {
    experience += monsterXpReward;
}

void Player::levelUp() {
    if (level >= 5) {
        return;
    }

    if (experience >= xpForLevel5) {
        level++;
        health += healthIncrease;
        attack += attackIncrease;
        defense += defenseIncrease;
        std::cout << "Your character has leveled up, here are the current stats: " << std::endl;
        std::cout << "Health: " << health << " (+" << healthIncrease << ")." << std::endl;
        std::cout << "Attack: " << attack << " (+" << attackIncrease << ")." << std::endl;
        std::cout << "Defense: " << defense << " (+" << defenseIncrease << ")." << std::endl;
        std::cout << "Level: " << level << " (+1)." << std::endl;
    }
    else if (experience >= xpForLevel4) {
        level++;
        health += healthIncrease;
        attack += attackIncrease;
        defense += defenseIncrease;
        std::cout << "Your character has leveled up, here are the current stats: " << std::endl;
        std::cout << "Health: " << health << " (+" << healthIncrease << ")." << std::endl;
        std::cout << "Attack: " << attack << " (+" << attackIncrease << ")." << std::endl;
        std::cout << "Defense: " << defense << " (+" << defenseIncrease << ")." << std::endl;
        std::cout << "Level: " << level << " (+1)." << std::endl;
    }
    else if (experience >= xpForLevel3) {
        level++;
        health += healthIncrease;
        attack += attackIncrease;
        defense += defenseIncrease;
        std::cout << "Your character has leveled up, here are the current stats: " << std::endl;
        std::cout << "Health: " << health << " (+" << healthIncrease << ")." << std::endl;
        std::cout << "Attack: " << attack << " (+" << attackIncrease << ")." << std::endl;
        std::cout << "Defense: " << defense << " (+" << defenseIncrease << ")." << std::endl;
        std::cout << "Level: " << level << " (+1)." << std::endl;
    }
    else if (experience >= xpForLevel2) {
        level++;
        health += healthIncrease;
        attack += attackIncrease;
        defense += defenseIncrease;
        std::cout << "Your character has leveled up, here are the current stats: " << std::endl;
        std::cout << "Health: " << health << " (+" << healthIncrease << ")." << std::endl;
        std::cout << "Attack: " << attack << " (+" << attackIncrease << ")." << std::endl;
        std::cout << "Defense: " << defense << " (+" << defenseIncrease << ")." << std::endl;
        std::cout << "Level: " << level << " (+1)." << std::endl;
    }
}

