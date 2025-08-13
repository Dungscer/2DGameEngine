#pragma once
#include <SDL2/SDL.h>
#include <string>
#include "Map.hpp"

class Game {
public:
    Game();
    ~Game();

    bool init(const std::string& title, int width, int height);
    void handleEvents();
    void update();
    void render();
    void clean();
    void resize(int width, int height); // resizing the window
    bool isRunning() const;

private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    Map map;
    bool running;
};
