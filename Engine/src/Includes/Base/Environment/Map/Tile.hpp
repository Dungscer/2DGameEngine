#pragma once

#include <SDL.h>
#include <string>

class Tile {
public:
    Tile(std::string path);
    ~Tile() = default;

    void render(SDL_Renderer* renderer) const;
private:
    std::string path;
};
