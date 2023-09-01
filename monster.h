#ifndef MONSTER_H
#define MONSTER_H

#include "character.h"

class Monster : public Character {
public:
    Monster(const std::string& name, int level, int health, int attack, int defense, int xpReward);
    void attackAct() override;
    int getAttack() const;
    int getHealth() const;
    void takeDamage(int playerDamage);
    int getXPReward() const;

private:
    int xpReward;
};

#endif // MONSTER_H


