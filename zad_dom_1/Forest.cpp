#include "Forest.h"

Forest::Forest(int width, int height) {
    matrix.resize(height);
    for (auto& row : matrix)
        row.resize(width, ' ');

    trees.reserve(width * height);
}

void Forest::addTree(Tree* t) {
    trees.push_back(t);

    for (int j = 0; j < t->getHeight(); j++)
        for (int i = 0; i < 2 * t->getHeight() - 1; i++)
            if (t->getTab()[j][i])
                matrix[t->getY() + j][t->getX() + i - t->getHeight() + 1] = trees.size() + '0';
}

void Forest::draw() {
    std::cout << "Forest:\n";
    for (auto& row : matrix) {
        for (auto c : row)
            std::cout << c << ' ';
        std::cout << '\n';
    }
}

Forest::~Forest() {
    for (auto t : trees)
        delete t;
    trees.clear();
    matrix.clear();
}
