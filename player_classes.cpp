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

void Crusader::firstSkill(std::string skillName, std::string description) {
    skillName = "Iron skin";
    description = "\"Iron Skin\" is an ability that grants exceptional defense and resilience to a character, significantly reducing damage taken from attacks and enhancing overall durability. Your defence increase by 75%";
    defense += defense*1.75;
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

void Berserker::firstSkill(std::string skillName, std::string description) {
    skillName = "Fury";
    description = "\"Fury\" is a skill that boosts a character's attack power when their health falls below a specific threshold, unleashing heightened offensive capabilities in dire situations.";
    attack += attack*1.5;
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

void Hunter::firstSkill(std::string skillName, std::string description) {
    skillName = "Survival";
    description = "\"Survival\" is an ability that enhances a character's health, attack, and defense attributes, providing increased survivability and combat effectiveness when activated.";
    health += 10;
    attack += attack*1.2;
    defense += defense*1.2;
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

void Druid::firstSkill(std::string skillName, std::string description) {
    skillName = "Cure";
    description = "\"Cure\" is a skill that enables healing, restoring a character's health to optimal levels. It serves as a vital ability for regaining lost vitality during challenging situations.";
    health += 50;
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

void Sorcerer::firstSkill(std::string skillName, std::string description) {
    skillName = "Death ball";
    description = "\"Death ball\" is a potent offensive skill that conjures a destructive sphere of energy, capable of causing devastating damage to the target. This skill harnesses the very forces of annihilation, making it a formidable and lethal ability in combat.";
    attack += 50;
}
