#pragma once
#include <iostream>

class GameSetting {
public:
    static GameSetting* getInstance();

    void setWidth(int width) { this->width = width; }
    void setHeight(int height) { this->height = height; }
    void setBrightness(int brightness) { this->brightness = brightness; }

    int getWidth() { return width; }
    int getHeight() { return height; }
    int getBrightness() { return brightness; }

    void displaySettings();

private:
    static GameSetting* sharedInstance;
    int brightness;
    int width;
    int height;
    GameSetting()
        : width{786}
        , height{1300}
        , brightness{75} {};
};
