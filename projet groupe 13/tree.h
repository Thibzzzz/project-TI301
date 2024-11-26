//
// Created by thiba on 22/11/2024.
//

#ifndef PROJET_SEMESTRE_3_TREE_H
#define PROJET_SEMESTRE_3_TREE_H

#include "stack.c"
#include "node.c"

typedef struct s_tree{
    p_node root;
}t_tree, *p_tree;

t_tree createEmptyTree();
void displayTree(p_node);
p_node projection(int, p_node, t_map);
p_node addSons(p_node, t_stack, t_map);
t_tree createTreeFromStack(t_stack, t_localisation, t_map);
p_node findMin(p_node, t_map);
#endif //PROJET_SEMESTRE_3_TREE_H
