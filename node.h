#ifndef MARC_MASTER_NODE_H
#define MARC_MASTER_NODE_H

struct s_node{
    int value;
    struct s_node *son1, *son2, *son3;
    int depth;
};

typedef struct s_node t_node, *p_node;

p_node createNode(int);

#endif //MARC_MASTER_NODE_H
