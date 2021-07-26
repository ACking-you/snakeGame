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
   /* WORD��windows.h�ж��壬��ͬ��unsigned short��ʹ�õ�4λ��ʾ���֣�ǰ������ɫ����4λ��ʾ���ֱ�����ɫ����������ȡֵΪxx��xΪһλ16����������0~F������ʹ�ã�����������ϡ�

    0~F �ֱ�������ɫ���£�

    0 = ��ɫ    8 = ��ɫ    1 = ����      9 = ��ɫ
    2 = ����    A = ��ɫ    3 = ����      B = ��ǳ��
    C = ��ɫ    4 = ����    5 = ��ɫ      D = ����
    6 = ��ɫ    E = ����    7 = ��ɫ      F = ���� */
}
void Window::setWindowSize(const short x, const short y) {
    system("title ̰����");//���ô��ڱ���
    char cmd[30];
    sprintf(cmd, "mode con cols=%d lines=%d", x * 2, y);//һ��ͼ�Ρ�ռ�����ַ����ʿ�ȳ���2
    system(cmd);//system(mode con cols=88 lines=88)���ô��ڿ�Ⱥ͸߶�
}
void Window::setScreenColor() {
    system("color fd");
}