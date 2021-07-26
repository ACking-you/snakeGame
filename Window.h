//
// Created by Alone on 2021/7/23.
//

#ifndef SNAKE_BYME_WINDOW_H
#define SNAKE_BYME_WINDOW_H

void setCursorPos(const short x,const short y);
class Window {
public:
    //构造函数传参调用函数初始化窗口，有窗口大小以及窗口文字前景和背景色
    Window(const short col,const short row,const unsigned short);
    void setWindowSize(const short x,const short y);
    void setFontColor(const unsigned  short c);
    void setScreenColor();
};


#endif //SNAKE_BYME_WINDOW_H
