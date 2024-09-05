#ifndef PLAYER_H
#define PLAYER_H

class Player {
public:
    Player(int x, int y);
    void move(int dx, int dy);
    int getX() const;
    int getY() const;
    void setPosition(int x, int y);

private:
    int x, y;
};

#endif // PLAYER_H
