//
// Created by Alone on 2021/7/23.
//
#include <iostream>
#include "Point.h"
#include "Window.h"
void Point::print() {
    setCursorPos(x, y);
    std::cout << "¡ö" ;
}
void Point::printCir() {
    setCursorPos(x,y);
    std::cout<<"¡ñ";
}
void Point::printSpace() {
    setCursorPos(x,y);
    std::cout<<"  ";
}
void Point::changePos(const short x, const short y) {
    this->x = x;
    this->y = y;
}
short Point::getX() {
    return this->x;
}
short Point::getY() {
    return this->y;
}