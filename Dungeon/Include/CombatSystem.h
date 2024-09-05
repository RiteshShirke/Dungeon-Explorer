#ifndef COMBAT_SYSTEM_H
#define COMBAT_SYSTEM_H

#include "Player.h"
#include "Enemy.h"

class CombatSystem {
public:
    CombatSystem(Player& player, Enemy& enemy);
    void startBattle();

private:
    Player& player;
    Enemy& enemy;
};

#endif // COMBAT_SYSTEM_H
