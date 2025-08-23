#include <SDL2/SDL.h>
#include "Component.hpp"

// window manager

class Window::Component{
public:
    Window();
    ~Window();

    void render();
    void update();
    void clean();
    void resize();
}