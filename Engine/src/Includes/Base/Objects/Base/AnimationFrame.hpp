#pragma once

#include <string>

class AnimationFrame {
public:
    AnimationFrame(std::string path);
    ~AnimationFrame() = default;
private:
    std::string path;
}
