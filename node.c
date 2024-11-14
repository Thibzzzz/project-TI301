#include <stdlib.h>
#include <stdio.h>
#include "node.h"

p_node createNode(int val){
    p_node nouv;

    nouv = (p_node)malloc(sizeof(t_node));
    nouv->value = val;
    nouv->son1 = nouv->son2 = NULL, nouv->son3;

    return nouv;
}