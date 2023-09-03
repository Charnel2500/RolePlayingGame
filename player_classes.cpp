#include "player_classes.h"

Crusader::Crusader(const std::string& name, int level, int experience)
    : Player(name, level, 120, 25, 10, experience) {
    className = "Crusader";
}

void Crusader::levelUp() {
    Player::levelUp();
    healthIncrease = 12;
    attackIncrease = 2;
    defenseIncrease = 4;
}

Berserker::Berserker(const std::string& name, int level, int experience)
    : Player(name, level, 150, 20, 15, experience) {
    className = "Berserker";
}

void Berserker::levelUp() {
    Player::levelUp();
    healthIncrease = 15;
    attackIncrease = 3;
    defenseIncrease = 3;
}

Hunter::Hunter(const std::string& name, int level, int experience)
    : Player(name, level, 100, 30, 8, experience) {
    className = "Hunter";
}

void Hunter::levelUp() {
    Player::levelUp();
    healthIncrease = 10;
    attackIncrease = 5;
    defenseIncrease = 1;
}

Druid::Druid(const std::string& name, int level, int experience)
    : Player(name, level, 110, 18, 12, experience) {
    className = "Druid";
}

void Druid::levelUp() {
    Player::levelUp();
    healthIncrease = 11;
    attackIncrease = 4;
    defenseIncrease = 2;
}

Sorcerer::Sorcerer(const std::string& name, int level, int experience)
    : Player(name, level, 90, 35, 5, experience) {
    className = "Sorcerer";
}

void Sorcerer::levelUp() {
    Player::levelUp();
    healthIncrease = 6;
    attackIncrease = 6;
    defenseIncrease = 1;
}
