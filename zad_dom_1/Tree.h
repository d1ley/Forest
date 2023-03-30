#ifndef TREE_H
#define TREE_H

#include <iostream>

class Tree {
private:
    int** tab;
    int height;
    char symbol;
    std::string color;
    int x, y;

public:
    Tree(int h, char s, std::string c, int x, int y);
    int getHeight();
    int** getTab();
    int getX();
    int getY();
    void draw();
    ~Tree();
};

#endif