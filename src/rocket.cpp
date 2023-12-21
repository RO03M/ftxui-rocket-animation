#include <iostream>
#include "rocket.hpp"

Rocket::Rocket(ftxui::Canvas* pCanvas) {    
    this->pCanvas = pCanvas;
    this->x = 10;
    this->y = 0;
    this->speed = 0;
}

void Rocket::draw() {
    std::ifstream file;
    std::string line;
    
    file.open(RESOURCES_PATH "rocket.txt");

    if (!file) {
        std::cout << ":(" << std::endl;
    }

    // for (auto x = 0; x < 10; x++) {
    //     for (auto y = 0; y < 10; y++) {
    //         this->pCanvas->DrawBlock(x * 2, y * 2, true, ftxui::Color::Orange1);
    //     }
    // }

    int x = 0;
    int y = 0;

    while (std::getline(file, line)) {
        x = 0;
        std::cout << line << std::endl;
        for (auto character : line) {
            switch (character) {
                case '0':
                    break;
                case 'r':
                    this->pCanvas->DrawBlock(x * 2, y * 2, true, ftxui::Color::Red);
                    this->pCanvas->DrawBlock(x * 2 + 1, y * 2, true, ftxui::Color::Red);
                    break;
                case 'w':
                    this->pCanvas->DrawBlock(x * 2, y * 2, true, ftxui::Color::White);
                    this->pCanvas->DrawBlock(x * 2 + 1, y * 2, true, ftxui::Color::White);
                    break;
                case 'b':
                    this->pCanvas->DrawBlock(x * 2, y * 2, true, ftxui::Color::Blue);
                    this->pCanvas->DrawBlock(x * 2 + 1, y * 2, true, ftxui::Color::Blue);
                    break;
                case 'o':
                    this->pCanvas->DrawBlock(x * 2, y * 2, true, ftxui::Color::Orange1);
                    this->pCanvas->DrawBlock(x * 2 + 1, y * 2, true, ftxui::Color::Orange1);
                    break;
                case 'y':
                    this->pCanvas->DrawBlock(x * 2, y * 2, true, ftxui::Color::Yellow);
                    this->pCanvas->DrawBlock(x * 2 + 1, y * 2, true, ftxui::Color::Yellow);
                    break;
            }
            x++;
        }
        y++;
    }

    file.close();
    // // #################################### ROCKET TOP #################################################
    // this->pCanvas->DrawPointLine(this->x + 0, this->y + 0, this->x + 30, this->y + 0, ftxui::Color::Red);
    // this->pCanvas->DrawPointLine(this->x + 30, this->y + 0, this->x + 30, this->y + 30, ftxui::Color::Red);
    // this->pCanvas->DrawPointLine(this->x + 0, this->y + 0, this->x + 30, this->y + 30, ftxui::Color::Red);

    // this->pCanvas->DrawBlock(0, 0, true, ftxui::Color::Red);
}