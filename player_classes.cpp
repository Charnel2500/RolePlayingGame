#include "player_classes.h"

Crusader::Crusader(const std::string& name, int level, int experience)
    : Player(name, level, 120, 25, 10, experience) {
    className = "Crusader";
}

void Crusader::levelUp(int healthIncrease, int attackIncrease, int defenseIncrease) {
    Player::levelUp(healthIncrease, attackIncrease, defenseIncrease);
}

Berserker::Berserker(const std::string& name, int level, int experience)
    : Player(name, level, 150, 20, 15, experience) {
    className = "Berserker";
}

void Berserker::levelUp(int healthIncrease, int attackIncrease, int defenseIncrease) {
    Player::levelUp(healthIncrease, attackIncrease, defenseIncrease);
}

Hunter::Hunter(const std::string& name, int level, int experience)
    : Player(name, level, 100, 30, 8, experience) {
    className = "Hunter";
}

void Hunter::levelUp(int healthIncrease, int attackIncrease, int defenseIncrease) {
    Player::levelUp(healthIncrease, attackIncrease, defenseIncrease);
}

Druid::Druid(const std::string& name, int level, int experience)
    : Player(name, level, 110, 18, 12, experience) {
    className = "Druid";
}

void Druid::levelUp(int healthIncrease, int attackIncrease, int defenseIncrease) {
    Player::levelUp(healthIncrease, attackIncrease, defenseIncrease);
}

Sorcerer::Sorcerer(const std::string& name, int level, int experience)
    : Player(name, level, 90, 35, 5, experience) {
    className = "Sorcerer";
}

void Sorcerer::levelUp(int healthIncrease, int attackIncrease, int defenseIncrease) {
    Player::levelUp(healthIncrease, attackIncrease, defenseIncrease);
}
