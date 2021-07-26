#include <iostream>
#include <deque>
#include "Window.h"
#include "Point.h"
#include "StartWindow.h"
int main() {
Window h(38,40,0xfc);
h.setScreenColor();
StartWindow St;
St.printSnake();
getchar();
}
