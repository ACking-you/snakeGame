//
// Created by Alone on 2021/7/23.
//
#include "Point.h"
#include "StartWindow.h"
#include <windows.h>
void StartWindow::init() {
    //初始化界面跳跃过来的小蛇
    for(int i=0,j=21;i<9;i++,j--){
        this->pre_snake.emplace_back(Point(i,j));
    }
    for(int i=9,j=12;i<=18;i++,j++){
        this->pre_snake.emplace_back(Point(i,j));
    }
    //初始化字体
    
}
void StartWindow::printSnake() {
    for(auto&& t:pre_snake){
        t.print();
        Sleep(speed);
    }
    std::vector<Point>temp;
    int sz = pre_snake.size();
    for(int i=0;i<sz;i++){
        temp.emplace_back(Point(pre_snake[i].getX()+18,pre_snake[i].getY()));
        temp.back().print();
        pre_snake[i].printSpace();
        Sleep(speed);
    }
    for(auto &&t:temp){
        t.printSpace();
        Sleep(speed);
    }
}
void StartWindow::printTxt() {

}
void StartWindow::clearTxt() {

}