#ifndef ENEMY_H
#define ENEMY_H

class Enemy {
public:
    Enemy(int x, int y);
    void move();
    int getX() const;
    int getY() const;

private:
    int x, y;
};

#endif // ENEMY_H
