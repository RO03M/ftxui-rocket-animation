#include <iostream>
#include <thread>

#include "ftxui/dom/elements.hpp"
#include "ftxui/dom/canvas.hpp"
#include "ftxui/dom/node.hpp"
#include "ftxui/screen/color.hpp"

#include "rocket.hpp"

int main() {
    auto canvas = ftxui::Canvas(500, 500);

    auto rocket = Rocket(&canvas);
    rocket.draw();

    auto document = ftxui::canvas(&canvas) | ftxui::flex;
    auto screen = ftxui::Screen::Create(ftxui::Dimension::Fit(document));

    ftxui::Render(screen, document);
    screen.Print();
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    screen.Clear();
    
    getchar();

    return 0;
}