#include "Enemy.h"
#include <cstdlib> // For rand()
Enemy::Enemy(int x, int y) : x(x), y(y) {}

void Enemy::move() {
    // Simple AI: move randomly
    x += (rand() % 3 - 1); // -1, 0, or 1
    y += (rand() % 3 - 1); // -1, 0, or 1
}

int Enemy::getX() const {
    return x;
}

int Enemy::getY() const {
    return y;
}
