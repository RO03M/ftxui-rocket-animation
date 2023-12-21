#pragma once

#include <fstream>
#include "ftxui/dom/canvas.hpp"

class Rocket {
    public:
        Rocket(ftxui::Canvas *pCanvas);
        void update();
        void draw();
        int x;
        int y;
        int speed;
    private:
        ftxui::Canvas *pCanvas;
};
