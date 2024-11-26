//
// Created by thiba on 22/11/2024.
//

#ifndef PROJET_SEMESTRE_3_NODE_H
#define PROJET_SEMESTRE_3_NODE_H

#include "moves.c"
#include "map.c"


struct s_node{
    int x;
    int y;
    int value;
    t_orientation ori;
    struct s_node *son1, *son2, *son3, *son4, *son5;
    int depth;
};

typedef struct s_node t_node,*p_node;

p_node createNode(int, int, int, t_orientation);
#endif //PROJET_SEMESTRE_3_NODE_H
