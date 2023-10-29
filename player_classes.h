#ifndef PLAYER_CLASSES_H
#define PLAYER_CLASSES_H

#include "player.h"

class Crusader : public Player {
public:
    Crusader(const std::string& name, int level, int experience);
    virtual ~Crusader();
    
    void levelUp();
    void firstSkill();
};

class Berserker : public Player {
public:
    Berserker(const std::string& name, int level, int experience);
    virtual ~Berserker();
    
    void levelUp();
    void firstSkill();
};

class Hunter : public Player {
public:
    Hunter(const std::string& name, int level, int experience);
    virtual ~Hunter();
    
    void levelUp();
    void firstSkill();
};

class Druid : public Player {
public:
    Druid(const std::string& name, int level, int experience);
    virtual ~Druid();
    
    void levelUp();
    void firstSkill();
};

class Sorcerer : public Player {
public:
    Sorcerer(const std::string& name, int level, int experience);
    virtual ~Sorcerer();
    
    void levelUp();
    void firstSkill();
};

#endif // PLAYER_CLASSES_H

