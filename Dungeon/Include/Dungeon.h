#ifndef DUNGEON_H
#define DUNGEON_H

#include <vector>
#include <cstdlib>

class Dungeon {
public:
    Dungeon(int width, int height);
    void generate();
    void print() const;

private:
    int width, height;
    std::vector<std::vector<char>> map;
};

#endif // DUNGEON_H
