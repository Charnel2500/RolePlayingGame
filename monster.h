#ifndef MONSTER_H
#define MONSTER_H

#include "character.h"

class Monster : public Character {
public:
    Monster(const std::string& name, int level, int health, int attack, int defense, int xpReward);
    void attack() override;

private:
    int xpReward;
};

#endif // MONSTER_H

