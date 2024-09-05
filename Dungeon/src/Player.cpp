#include "Player.h"

Player::Player(int x, int y) : x(x), y(y) {}

void Player::move(int dx, int dy) {
    x += dx;
    y += dy;
}

int Player::getX() const {
    return x;
}

int Player::getY() const {
    return y;
}

void Player::setPosition(int x, int y) {
    this->x = x;
    this->y = y;
}
