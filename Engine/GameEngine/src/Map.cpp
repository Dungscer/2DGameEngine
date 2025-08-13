#include "Map.hpp"
#include <string>
#include <stdlib.h>

Map::Map() : seed("0000-0000-0000-0000"), gridSize(60) {}

void Map::generateSeed() {
    std::string newSeed;

    for (size_t i = 0; i < 16; i++)
    {
        int random = rand();
        newSeed += random;

        if (i % 4 == 0) {
            newSeed += "-";
        }
    }

    seed = newSeed;
}


void Map::generate() {
    
};