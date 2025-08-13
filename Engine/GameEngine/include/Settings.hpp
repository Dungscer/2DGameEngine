#pragma once

class Settings {
public:
    Settings();

    void changeScreenSize(int screenHeight, int screenWidth);

private:
    int screenWidth;
    int screenHeight;
};