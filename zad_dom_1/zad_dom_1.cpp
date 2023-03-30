#include "Forest.h"
#include <windows.h> 

int main() {

    HANDLE console_color;
    console_color = GetStdHandle(STD_OUTPUT_HANDLE);
    int Blue = 9, Green = 10, Red = 12;

    Forest forest(50, 20);

    Tree t1(5, '1', "green", 10, 5);
    Tree t2(7, '2', "green", 35, 10);
    Tree t3(4, '3', "green", 20, 15);
    Tree t4(6, '4', "green", 5, 10);

    forest.addTree(&t1);
    forest.addTree(&t2);
    forest.addTree(&t3);
    forest.addTree(&t4);

    forest.draw();

    return 0;
}
