#include "../../../Base/Environment/Map/TileMap.hpp"

TileMap::TileMap(int width, int height, int tileSize)
    : width(width), height(height), tileSize(tileSize), tiles(height, std::vector<int>(width, 0)) {}

void TileMap::setTile(int x, int y, int tileType) {
    if (x >= 0 && x < width && y >= 0 && y < height) {
        tiles[y][x] = tileType;
    }
}

int TileMap::getTile(int x, int y) const {
    if (x >= 0 && x < width && y >= 0 && y < height) {
        return tiles[y][x];
    }
    return -1; // Invalid tile
}

SDL_Color TileMap::getColorForTile(int tileType) const {
    switch(tileType) {
        case 0: return {255, 0, 0, 255};   // Piros
        case 1: return {0, 255, 0, 255};   // Zöld
        case 2: return {0, 0, 255, 255};   // Kék
        default: return {0, 0, 0, 255};    // Fekete
    }
}

void TileMap::render(SDL_Renderer* renderer) const {
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            int tile = tiles[y][x];
            SDL_Color color = getColorForTile(tile);

            SDL_Rect rect = {
                x * tileSize,
                y * tileSize,
                tileSize,
                tileSize
            };

            SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
            SDL_RenderFillRect(renderer, &rect);
        }
    }
}