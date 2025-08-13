#pragma once
#include <string>

class Map {
public:
    Map();

    void generateSeed();


    void generate();


private:
    std::string seed;
    int gridSize;
};