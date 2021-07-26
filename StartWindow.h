//
// Created by Alone on 2021/7/23.
//

#ifndef SNAKE_BYME_STARTWINDOW_H
#define SNAKE_BYME_STARTWINDOW_H
#include <vector>
#include "Point.h"
class StartWindow {
public:
    StartWindow():speed(35){init();}
    void init();
    void printSnake();
    void printTxt();
    void clearTxt();
private:
    std::vector<Point> autorName;
    std::vector<Point> pre_snake;
    int speed;
};


#endif //SNAKE_BYME_STARTWINDOW_H
