//
// Created by Alone on 2021/7/23.
//
#include "Window.h"
#include <windows.h>
#include <stdio.h>
void setCursorPos(const short x,const short y){
COORD pos = {static_cast<SHORT>(2*x),y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
Window::Window(const short col, const short row, const unsigned short c) {
    setWindowSize(col,row);
    setFontColor(c);
}
void Window::setFontColor(const unsigned short c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
   /* WORD在windows.h中定义，等同于unsigned short，使用低4位表示文字（前景）颜色，高4位表示文字背景颜色，所以它的取值为xx。x为一位16进制数，即0~F都可以使用，可以随意组合。

    0~F 分别代表的颜色如下：

    0 = 黑色    8 = 灰色    1 = 淡蓝      9 = 蓝色
    2 = 淡绿    A = 绿色    3 = 湖蓝      B = 淡浅绿
    C = 红色    4 = 淡红    5 = 紫色      D = 淡紫
    6 = 黄色    E = 淡黄    7 = 白色      F = 亮白 */
}
void Window::setWindowSize(const short x, const short y) {
    system("title 贪吃蛇");//设置窗口标题
    char cmd[30];
    sprintf(cmd, "mode con cols=%d lines=%d", x * 2, y);//一个图形■占两个字符，故宽度乘以2
    system(cmd);//system(mode con cols=88 lines=88)设置窗口宽度和高度
}
void Window::setScreenColor() {
    system("color fd");
}