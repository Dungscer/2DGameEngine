#pragma once
#include "SpawnPoint.hpp"
#include "Sprite.hpp"
#include <string>

class Player {
public:
    Player();

    void init(std::string path);
    

private:
    int healtPoint;    
    SpawnPoint spawnPoint;
    Sprite sprite;
};