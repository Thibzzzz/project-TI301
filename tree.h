//
// Created by thiba on 14/11/2024.
//

#ifndef MARC_MASTER_TREE_H
#define MARC_MASTER_TREE_H

#include "node.h"

typedef struct s_tree{
    p_node root;
}t_tree, *p_tree;

t_tree createEmptyTree();
p_node findMin(t_tree->root);
#endif //MARC_MASTER_TREE_H
