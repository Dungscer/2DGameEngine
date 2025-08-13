#include "Game.hpp"
#include "Player.hpp"

int main(int argc, char* argv[]) {
    Game game;
    Player player;
    

    int width = 800;
    int height = 600;


    if (!game.init("My Game", 800, 600)) {
        return -1;
    }

    player.init("player.png");

    while (game.isRunning()) {
        game.handleEvents();
        game.update();
        game.render();
    }

    game.clean();
    return 0;
}
