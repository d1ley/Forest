#include "Tree.h"
#include "windows.h"

Tree::Tree(int h, char s, int c, int x, int y) : height(h), symbol(s), color(c), x(x), y(y) {
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
    HANDLE console_color;
    console_color = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(console_color, color); 
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < 2 * height - 1; j++) {
            if (tab[i][j])
                std::cout << symbol;
            else
                std::cout << ' ';
        }
        std::cout << '\n';
    }
    SetConsoleTextAttribute(console_color, 7); 
}

Tree::~Tree()
{
    for (int i = 0; i < height; i++)
        delete tab[i];
    delete[] tab;
}