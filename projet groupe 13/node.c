//
// Created by thiba on 22/11/2024.
//
#include <stdlib.h>
#include <stdio.h>
#include "node.h"

p_node createNode(int x, int y, int val, t_orientation ori){
    p_node nouv;

    nouv =(p_node)malloc(sizeof(t_node));
    nouv->x = x;
    nouv->y = y;
    nouv->value = val;
    nouv->ori = ori;
    nouv->son1 = nouv->son2 = nouv->son3 = nouv->son4 = nouv->son5 =NULL;

    return nouv;
}