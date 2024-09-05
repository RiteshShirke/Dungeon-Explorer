#include <iostream>
#include "Dungeon.h"
#include "Player.h"
#include "Enemy.h"
#include "CombatSystem.h"

int main() {
    // Setup
    Dungeon dungeon(10, 10);
    dungeon.generate();
    dungeon.print();

    Player player(1, 1);
    Enemy enemy(5, 5);

    CombatSystem combat(player, enemy);

    char command;
    while (true) {
        std::cout << "Enter command (w/a/s/d to move, b to battle, q to quit): ";
        std::cin >> command;

        if (command == 'q') {
            break;
        } else if (command == 'b') {
            combat.startBattle();
        } else {
            int dx = 0, dy = 0;
            switch (command) {
                case 'w': dy = -1; break;
                case 's': dy = 1; break;
                case 'a': dx = -1; break;
                case 'd': dx = 1; break;
            }
            player.move(dx, dy);
        }

        std::cout << "Player position: (" << player.getX() << ", " << player.getY() << ")" << std::endl;
    }

    return 0;
}
