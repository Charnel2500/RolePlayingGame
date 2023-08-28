#include "player_classes.h"

Crusader::Crusader(const std::string& name, int level, int experience)
    : Player(name, level, 120, 25, 10, experience) {}

Berserker::Berserker(const std::string& name, int level, int experience)
    : Player(name, level, 150, 20, 15, experience) {}

Hunter::Hunter(const std::string& name, int level, int experience)
    : Player(name, level, 100, 30, 8, experience) {}

Druid::Druid(const std::string& name, int level, int experience)
    : Player(name, level, 110, 18, 12, experience) {}

Sorcerer::Sorcerer(const std::string& name, int level, int experience)
    : Player(name, level, 90, 35, 5, experience) {}
