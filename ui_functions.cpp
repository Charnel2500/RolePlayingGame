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

void fightOrcDescription() {
    std::cout << R"(
            As you venture deeper into the ominous forest, your senses are on high alert, detecting danger lurking in the shadows. Suddenly, a group of malevolent orcs emerges from the dense underbrush, their sinister grins revealing rows of sharp, yellowed teeth. The leader, a particularly burly and menacing orc, steps forward, brandishing a massive, jagged-edged axe. It's clear that they have no intention of letting you pass without a fierce battle.

            With your weapon at the ready, you brace yourself for the impending conflict. The orcs surround you, their malicious laughter echoing through the ancient trees. The leader lunges at you with a powerful swing of his axe, but you manage to deftly sidestep the attack, narrowly avoiding the deadly blow. The battle is about to begin.

            You exchange furious blows with the orcs, their sheer strength and combat prowess making them formidable adversaries. But you stand your ground, determined to protect yourself and emerge victorious. As the battle rages on, you can't help but wonder what other challenges lie ahead in this treacherous forest. Victory is within your grasp, but you must remain focused and outsmart these cunning and ruthless orcs to prevail.

            With every strike and parry, you inch closer to triumph, and the forest itself seems to hold its breath, watching the outcome of this epic clash between a lone hero and a band of savage orcs.
            )" << std::endl;
}

void fightTrollDescription() {
    std::cout << R"(
            As you venture deeper into the ominous forest, your senses are on high alert, detecting danger lurking in the shadows. Suddenly, a group of malevolent orcs emerges from the dense underbrush, their sinister grins revealing rows of sharp, yellowed teeth. The leader, a particularly burly and menacing orc, steps forward, brandishing a massive, jagged-edged axe. It's clear that they have no intention of letting you pass without a fierce battle.

            With your weapon at the ready, you brace yourself for the impending conflict. The orcs surround you, their malicious laughter echoing through the ancient trees. The leader lunges at you with a powerful swing of his axe, but you manage to deftly sidestep the attack, narrowly avoiding the deadly blow. The battle is about to begin.

            You exchange furious blows with the orcs, their sheer strength and combat prowess making them formidable adversaries. But you stand your ground, determined to protect yourself and emerge victorious. As the battle rages on, you can't help but wonder what other challenges lie ahead in this treacherous forest. Victory is within your grasp, but you must remain focused and outsmart these cunning and ruthless orcs to prevail.

            With every strike and parry, you inch closer to triumph, and the forest itself seems to hold its breath, watching the outcome of this epic clash between a lone hero and a band of savage orcs.
            )" << std::endl;
}

void fightOgreDescription() {
    std::cout << R"(
            Deep within the heart of the enchanted forest, you stumble upon a cave entrance partially obscured by overgrown vegetation. Curiosity piqued, you cautiously step inside, only to find yourself in a dimly lit cavern. Your footsteps echo, and the air is heavy with an earthy, musky scent.

            As your eyes adjust to the darkness, you notice a massive figure lurking in the shadows. It's an ogre, an enormous and grotesque creature, hunched over with mottled, greenish-brown skin. Its eyes gleam with malevolence as it snarls, revealing rows of jagged teeth.

            Without warning, the ogre lunges at you with a deafening roar, wielding a crude but menacing club. You barely manage to sidestep its attack, your heart pounding in your chest. The battle is upon you.

            The ogre is a fearsome opponent, its immense size granting it unparalleled strength. Each swing of its club threatens to shatter the very ground beneath you. Yet, you stand your ground, determined to protect yourself and confront this monstrous threat.

            The cave's walls seem to close in on you as you exchange blows with the ogre, your agility pitted against its raw power. Amidst the struggle, you can't help but ponder the secrets hidden within this mystical forest and the origins of such formidable creatures. But for now, survival is your sole focus, and triumph is your only goal.

            As the battle unfolds, you become acutely aware of the shadows dancing on the cavern walls, cast by the flickering torchlight. The ancient stones themselves bear witness to this epic confrontation between a brave adventurer and a savage ogre.

            With each clash of steel and bone, the cave seems to reverberate with the echoes of a battle that will be etched into the annals of this enchanted realm. Victory awaits those who can rise above fear and conquer the darkness.
            )" << std::endl;
}
