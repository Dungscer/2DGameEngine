#pragma once
#include <string>

class Sprite {
public:
    Sprite();

    void getSpriteData(); // TODO
    void init(std::string newPath);

private:
    std::string path;
};


