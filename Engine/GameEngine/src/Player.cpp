#include "Player.hpp"
#include "Sprite.hpp"

Player::Player() : healtPoint(100), spawnPoint() {}

void Player::init(std::string path) {
    sprite.init(path);
};