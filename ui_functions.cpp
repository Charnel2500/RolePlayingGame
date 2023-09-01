#include "ui_functions.h"
#include <iostream>

void displayWelcomeMessage() {
    std::cout << "Welcome to the RPG game!" << std::endl;
}

void displayGameOverMessage() {
    std::cout << "Game Over. Thanks for playing!" << std::endl;
}

void classDescription() {
    std::cout << "1. Crusader" << std::endl;
    std::cout << R"(
        Description: The Crusader is a fearless warrior who wields a one-handed weapon and shield. Known for unwavering faith and the ability to protect their
        comrades, the Crusader strikes a balance between offense and defense.)" << std::endl;
    std::cout << "2. Berserker" << std::endl;
    std::cout << R"(
        Description: The Berserker is a wild warrior who knows no fear. When choosing this class, players can opt for either a two-handed weapon or dual one-handed 
        weapons. The Berserker excels at delivering powerful blows and annihilating enemies on the front lines.)" << std::endl;
    std::cout << "3. Hunter" << std::endl;
    std::cout << R"(
        Description: The Hunter is a skilled tracker specializing in long-range attacks. They can use a crossbow or a bow to precisely eliminate foes from a distance.
        The Hunter is an expert in tracking and evading dangers.)" << std::endl;
    std::cout << "4. Druid" << std::endl;
    std::cout << R"(
        Description: The Druid is a spellcaster deeply connected to nature, possessing unique abilities in nature magic and healing. They can harness the power of 
        nature, heal the wounds of their companions, and control plants and animals. The Druid is a defender of the ecosystem.)" << std::endl;
    std::cout << "5. Sorcerer" << std::endl;
    std::cout << R"(
        Description: The Sorcerer is a master of destructive magic. They wield powerful spells that can deal tremendous damage to enemies. The Sorcerer is renowned
        for their ability to manipulate the elements and unleash catastrophic spells.)" << std::endl;
}

void firstFightGoblinDescription() {
    std::cout << R"(
            Description: You venture deeper into the gloomy forest, your heart pounding as you sense danger lurking in the shadows. Suddenly, a group of malevolent
            goblins emerges from the underbrush, their sinister grins revealing rows of sharp teeth. The leader, a particularly nasty-looking goblin, steps forward
            with a rusted sword in hand. It's clear that they have no intention of letting you pass without a fight.

            With your weapon drawn, you brace yourself for battle. The goblins surround you, their malicious laughter echoing through the trees. The leader lunges at
            you with a swift strike, but you manage to parry the attack just in time. The battle has begun.

            You exchange blows with the goblins, their numbers and agility making them formidable opponents. But you stand your ground, determined to protect yourself
            and emerge victorious. As the battle rages on, you can't help but wonder what other challenges lie ahead in this treacherous forest. Victory is within
            your grasp, but you must stay focused and outsmart these cunning goblins to prevail.)" << std::endl;
}

