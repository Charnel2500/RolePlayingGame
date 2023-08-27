#ifndef PLAYER_H
#define PLAYER_H

#include "character.h"

class Player : public Character {
public:
    Player(const std::string& name, int level, int health, int attack, int defense, int experience);
    void attack() override;

private:
    int experience;
};

#endif // PLAYER_H

