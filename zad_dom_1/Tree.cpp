#include "Tree.h"

Tree::Tree(int h, char s, std::string c, int x, int y) : height(h), symbol(s), color(c), x(x), y(y) {
    tab = new int* [height];
    for (int i = 0; i < height; i++) {
        tab[i] = new int[2 * height - 1];
        for (int j = 0; j < 2 * height - 1; j++) {
            if (j >= height - i - 1 && j <= height + i - 1)
                tab[i][j] = 1;
            else
                tab[i][j] = 0;
        }
    }


}

int Tree::getHeight() {
    return height;
}

int** Tree::getTab() {
    return tab;
}

int Tree::getX() {
    return x;
}

int Tree::getY() {
    return y;
}

void Tree::draw() {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < 2 * height - 1; j++) {
            if (tab[i][j])
                std::cout << symbol;
            else
                std::cout << ' ';
        }
        std::cout << '\n';
    }
}

Tree::~Tree()
{
    int j;
    for (j = 0; j < height; j++)
        delete tab[j];
    delete tab;
}