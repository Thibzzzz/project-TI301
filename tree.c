#include <stdlib.h>
#include <stdio.h>
#include "tree.h"

#define MIN(i, j)(((i) < (j)) ? (i):(j))

t_tree createEmptyTreet(){
    nouv = (t_tree)malloc(sizeof(t_tree));
    nouv->root = NULL;
    return nouv;
}

p_node findMin(t_tree->node root){

    return MIN(root->son1, root->son2, root->son3);
}