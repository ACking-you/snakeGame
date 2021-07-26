//
// Created by Alone on 2021/7/23.
//

#ifndef SNAKE_BYME_POINT_H
#define SNAKE_BYME_POINT_H


class Point {
public:
    Point(short x = 0,short y = 0):x(x),y(y){}
    //打印方形
    void print();
    //打印圆形
    void printCir();
    //打印空白
    void printSpace();
    //重载 == 运算符
    bool operator==(Point& t){
        return t.x== this->x&&t.y == this->y;
    }
    void changePos(const short x,const short y);
    short getX();
    short getY();
private:
    short x;
    short y;
};


#endif //SNAKE_BYME_POINT_H
