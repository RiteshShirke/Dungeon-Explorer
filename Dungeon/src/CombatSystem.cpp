#include "CombatSystem.h"
#include <iostream>

CombatSystem::CombatSystem(Player& player, Enemy& enemy) : player(player), enemy(enemy) {}

void CombatSystem::startBattle() {
    std::cout << "Battle started!" << std::endl;
    // Simple combat simulation
    std::cout << "Player attacks the enemy!" << std::endl;
    std::cout << "Enemy attacks the player!" << std::endl;
}

