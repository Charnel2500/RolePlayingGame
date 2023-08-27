#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

class Character {
public:
    Character(const std::string& name, int level, int health, int attack, int defense);
    virtual void attack();

protected:
    std::string name;
    int level;
    int health;
    int attack;
    int defense;
};

#endif // CHARACTER_H

