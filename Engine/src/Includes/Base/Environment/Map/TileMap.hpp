
#pragma once

#include <SDL.h>
#include <vector>

class TileMap {
public:
    TileMap(int width, int height, int tileSize);
    ~TileMap() = default;

    void render(SDL_Renderer* renderer) const;
    void setTile(int x, int y, int tileType);
    int getTile(int x, int y) const;

private:
    SDL_Color getColorForTile(int tileType) const;

    int width;
    int height;
    int tileSize;
    std::vector<std::vector<int>> tiles;
};