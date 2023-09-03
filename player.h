#ifndef PLAYER_H
#define PLAYER_H

#include "character.h"

class Player : public Character {
public:
    Player(const std::string& name, int level, int health, int attack, int defense, int experience);
    void attackAct() override;
    std::string getClassName() const;
    int getAttack() const;
    int getHealth() const;
    int getDefense() const;
    void takeDamage(int monsterDamage);
    void resetHealth();
    void gainExperience(int monsterXpReward);
    virtual void levelUp();

protected:
    std::string className;
    int experience;
    int xpForLevel2;
    int xpForLevel3;
    int xpForLevel4;
    int xpForLevel5;
    int healthIncrease;
    int attackIncrease;
    int defenseIncrease;

private:
    int baseHealth;
};

#endif // PLAYER_H

