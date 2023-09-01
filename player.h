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
    void takeDamage(int monsterDamage);
    void resetHealth();
    void gainExperience(int monsterXpReward);

protected:
    std::string className;

private:
    int experience;
    int baseHealth;
};

#endif // PLAYER_H




