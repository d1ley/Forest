#ifndef FOREST_H
#define FOREST_H

#include <vector>
#include "Tree.h"

class Forest {
private:
    std::vector<Tree*> trees;
    std::vector<std::vector<char>> matrix;

public:
    Forest(int width, int height);
    void addTree(Tree* t);
    void draw();
    ~Forest();
};

#endif
