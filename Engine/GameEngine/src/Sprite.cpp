#include "Sprite.hpp"
#include <string>

Sprite::Sprite() : path() {}

void Sprite::getSpriteData() {

};

void Sprite::init(std::string newPath) {
    path = newPath;
};

