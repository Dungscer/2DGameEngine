
#include <SDL.h>
#include <AnimationFrame.hpp>
#include <string>
#include <vector>

class Animation {
public:
    Animation(std::string name);
    ~Animation() = default;

    void addFrame(AnimationFrame frame);
    
    void removeFrame(AnimationFrame frame);
    void removeFrame(int index);

    AnimationFrame getFrame(int index);
private:
    std::string name;
    std::vector<AnimationFrame> animation;
}