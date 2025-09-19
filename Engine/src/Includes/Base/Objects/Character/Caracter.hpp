
#include <string>
#include <../Base/Animation.hpp>
#include <vector>


class Character {
public:
    Character(std::string name);
    ~Character() = default;

    void addAnimation(Animation animation);
    Animation getAnimation(std::string name);


    void setName(std::string name);
private:
    std::string name;
    std::vector<Animation> animations;
}