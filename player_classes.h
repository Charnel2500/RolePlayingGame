#ifndef PLAYER_CLASSES_H
#define PLAYER_CLASSES_H

#include "player.h"

class Crusader : public Player {
public:
    Crusader(const std::string& name, int level, int experience);
    void levelUp() override;
    void firstSkill(std::string skillName, std::string description) override;
};

class Berserker : public Player {
public:
    Berserker(const std::string& name, int level, int experience);
    void levelUp() override;
    void firstSkill(std::string skillName, std::string description) override;
};

class Hunter : public Player {
public:
    Hunter(const std::string& name, int level, int experience);
    void levelUp() override;
    void firstSkill(std::string skillName, std::string description) override;
};

class Druid : public Player {
public:
    Druid(const std::string& name, int level, int experience);
    void levelUp() override;
    void firstSkill(std::string skillName, std::string description) override;
};

class Sorcerer : public Player {
public:
    Sorcerer(const std::string& name, int level, int experience);
    void levelUp() override;
    void firstSkill(std::string skillName, std::string description) override;
};

#endif // PLAYER_CLASSES_H

