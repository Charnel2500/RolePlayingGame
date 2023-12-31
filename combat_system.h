// combat_system.h

#ifndef COMBAT_SYSTEM_H
#define COMBAT_SYSTEM_H

#include "player.h"
#include "monster.h"

void battle(Player& player, Monster& monster);
void continueJourney(Player& player);
void showStats(Player& player);

#endif

