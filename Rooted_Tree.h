//
// Created by eldar.a on 17/01/2020.
//

#ifndef DS_A_ROOTED_TREE_H
#define DS_A_ROOTED_TREE_H

#include <cstddef>
#include "Tree_Node.h"

class Rooted_Tree {
private:
Tree_Node * _root;

public:
    Rooted_Tree() : _root(NULL) {}

    ~Rooted_Tree();
};

#endif //DS_A_ROOTED_TREE_H
