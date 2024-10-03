#include "SingletonExample.h"

// Define the static instance pointer
GameSetting* GameSetting::sharedInstance = nullptr;

GameSetting* GameSetting::getInstance() {
    if (sharedInstance == nullptr)
        sharedInstance = new GameSetting();
    return sharedInstance;
}

void GameSetting::displaySettings() {
    std::cout << "brightness: " << brightness << std::endl;
    std::cout << "height: " << height << std::endl;
    std::cout << "width: " << width << std::endl;
}

int main() {
    GameSetting* setting = GameSetting::getInstance();
    setting->displaySettings();

    return 0;
}
