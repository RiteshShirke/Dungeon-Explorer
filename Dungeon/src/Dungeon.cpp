#include "Dungeon.h"
#include <iostream>

Dungeon::Dungeon(int width, int height) : width(width), height(height), map(width, std::vector<char>(height, '.')) {}

void Dungeon::generate() {
    // Simple random dungeon generation for example purposes
    for (int i = 0; i < width; ++i) {
        for (int j = 0; j < height; ++j) {
            if (rand() % 10 < 2) {
                map[i][j] = '#'; // Wall
            }
        }
    }
}

void Dungeon::print() const {
    for (const auto& row : map) {
        for (char cell : row) {
            std::cout << cell;
        }
        std::cout << std::endl;
    }
}
