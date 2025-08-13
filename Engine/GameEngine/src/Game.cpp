#include "Game.hpp"
#include "Map.hpp"
#include <iostream>

Game::Game() : window(nullptr), renderer(nullptr), running(false), map() {}

Game::~Game() {
    clean();
}

bool Game::init(const std::string& title, int width, int height) {
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        std::cerr << "SDL init error: " << SDL_GetError() << std::endl;
        return false;
    }

    window = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                              width, height, SDL_WINDOW_RESIZABLE);
    if (!window) {
        std::cerr << "Window error: " << SDL_GetError() << std::endl;
        return false;
    }    

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (!renderer) {
        std::cerr << "Renderer error: " << SDL_GetError() << std::endl;
        return false;
    }

    Map newMap;
    newMap.generateSeed();

    map = newMap;
    running = true;
    return true;
}

void Game::handleEvents() {
    SDL_Event event;
    SDL_PollEvent(&event);
    if (event.type == SDL_QUIT) {
        running = false;
    }
}

void Game::update() {
    // Itt lehetne fizikát, logikát frissíteni
}

void Game::render() {
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); // fekete háttér
    SDL_RenderClear(renderer);

    // Itt történik a renderelés
    SDL_RenderPresent(renderer);
}

void Game::clean() {
    if (renderer) SDL_DestroyRenderer(renderer);
    if (window) SDL_DestroyWindow(window);
    SDL_Quit();
}

void Game::resize(int width, int height) {
    if(window){
        SDL_SetWindowSize(window, width, height);
    }
}

bool Game::isRunning() const {
    return running;
}
