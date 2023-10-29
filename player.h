#ifndef PLAYER_H
#define PLAYER_H

#include "character.h"

class Player : public Character {
public:
    Player(const std::string& name, int level, int health, int attack, int defense, int experience);
    virtual ~Player();
    
    void attackAct() override;
    std::string getName() const;
    std::string getClassName() const;
    int getLevel() const;
    int getAttack() const;
    int getHealth() const;
    int getDefense() const;
    int getExperience() const;
    int takeDamage(int monsterDamage);
    void resetHealth();
    void resetAttack();
    void resetDefense();
    void gainExperience(int monsterXpReward);
    virtual void levelUp();
    virtual void firstSkill() {};

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
    std::string description;
    std::string skillName;
    int initialDefense;

private:
    int baseHealth;
    int baseAttack;
    int baseDefense;
};

#endif // PLAYER_H

