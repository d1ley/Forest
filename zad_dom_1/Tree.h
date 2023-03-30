#ifndef TREE_H
#define TREE_H
using namespace std;
#include <iostream>

class Tree {
private:
    int** tab;
    int height;
    char symbol;
    int color;
    int x, y;

public:
    Tree(int h, char s, int c, int x, int y);
    int getHeight();
    int** getTab();
    int getX();
    int getY();
    void draw();
    ~Tree();
};

#endif