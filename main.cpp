#include "character.h"
#include "player.h"
#include "monster.h"
#include "iuFunctions.h"

int main() {
    Player player("Hero", 5, 100, 20, 10, 0);
    Monster monster("Goblin", 3, 50, 15, 5, 50);
    
    displayWelcomeMessage();

    player.attack();
    monster.attack();

    displayGameOverMessage();
    return 0;
}
