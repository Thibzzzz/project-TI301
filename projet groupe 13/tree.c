//
// Created by thiba on 22/11/2024.
//
#include <stdlib.h>
#include <stdio.h>
#include "tree.h"
#include "loc.h"

t_tree createEmptyTree(){
    t_tree nouv;
    nouv.root = NULL;
    return nouv;
}

p_node projection(int val, p_node n, t_map map){

    p_node nouv;
    t_position pos;
    switch(val){
        case 1:
            switch(n->ori){
                case NORTH :
                    pos.x = n->x;
                    pos.y = n->y-1;
                    if (isValidLocalisation(pos, map.x_max, map.y_max)) {
                        nouv = createNode(n->x, n->y - 1, map.costs[n->x][n->y - 1], n->ori);
                        break;
                    }
                    else{
                        return NULL;
                    }
                case EAST :
                    pos.x = n->x+1;
                    pos.y = n->y;
                    if (isValidLocalisation(pos, map.x_max, map.y_max)) {
                        nouv = createNode(n->x+1, n->y, map.costs[n->x+1][n->y], n->ori);
                        break;
                    }
                    else{
                        return NULL;
                    }
                case SOUTH :
                    pos.x = n->x;
                    pos.y = n->y+1;
                    if (isValidLocalisation(pos, map.x_max, map.y_max)) {
                        nouv = createNode(n->x, n->y+1, map.costs[n->x][n->y+1], n->ori);
                        break;
                    }
                    else{
                        return NULL;
                    }
                case WEST :
                    pos.x = n->x-1;
                    pos.y = n->y;
                    if (isValidLocalisation(pos, map.x_max, map.y_max)) {
                        nouv = createNode(n->x-1, n->y, map.costs[n->x-1][n->y], n->ori);
                        break;
                    }
                    else{
                        return NULL;
                    }
                default :
                    return NULL;
            }
            break;
        case 2 :
            switch(n->ori){
                case NORTH :
                    pos.x = n->x;
                    pos.y = n->y-2;
                    if (isValidLocalisation(pos, map.x_max, map.y_max)) {
                        nouv = createNode(n->x, n->y-2, map.costs[n->x][n->y-2], n->ori);
                        break;
                    }
                    else{
                        return NULL;
                    }
                case EAST :
                    pos.x = n->x+2;
                    pos.y = n->y;
                    if (isValidLocalisation(pos, map.x_max, map.y_max)) {
                        nouv = createNode(n->x+2, n->y, map.costs[n->x+2][n->y], n->ori);
                        break;
                    }
                    else{
                        return NULL;
                    }
                case SOUTH :
                    pos.x = n->x;
                    pos.y = n->y+2;
                    if (isValidLocalisation(pos, map.x_max, map.y_max)) {
                        nouv = createNode(n->x, n->y+2, map.costs[n->x][n->y+2], n->ori);
                        break;
                    }
                    else{
                        return NULL;
                    }
                case WEST :
                    pos.x = n->x-2;
                    pos.y = n->y;
                    if (isValidLocalisation(pos, map.x_max, map.y_max)) {
                        nouv = createNode(n->x-2, n->y, map.costs[n->x-2][n->y], n->ori);
                        break;
                    }
                    else{
                        return NULL;
                    }
                default :
                    return NULL;
            }
            break;
        case 3 :
            switch(n->ori){
                case NORTH :
                    pos.x = n->x;
                    pos.y = n->y-3;
                    if (isValidLocalisation(pos, map.x_max, map.y_max)) {
                        nouv = createNode(n->x, n->y - 3, map.costs[n->x][n->y - 3], n->ori);
                        break;
                    }
                    else{
                        return NULL;
                    }
                case EAST :
                    pos.x = n->x+3;
                    pos.y = n->y;
                    if (isValidLocalisation(pos, map.x_max, map.y_max)) {
                        nouv = createNode(n->x+3, n->y, map.costs[n->x+3][n->y], n->ori);
                        break;
                    }
                    else{
                        return NULL;
                    }
                case SOUTH :
                    pos.x = n->x;
                    pos.y = n->y+3;
                    if (isValidLocalisation(pos, map.x_max, map.y_max)) {
                        nouv = createNode(n->x, n->y+3, map.costs[n->x][n->y+3], n->ori);
                        break;
                    }
                    else{
                        return NULL;
                    }
                case WEST :
                    pos.x = n->x-3;
                    pos.y = n->y;
                    if (isValidLocalisation(pos, map.x_max, map.y_max)) {
                        nouv = createNode(n->x-3, n->y, map.costs[n->x-3][n->y], n->ori);
                        break;
                    }
                    else{
                        return NULL;
                    }
                default :
                    return NULL;
            }
            break;
        case 4 :
            switch(n->ori){
                case NORTH :
                    pos.x = n->x;
                    pos.y = n->y+1;
                    if (isValidLocalisation(pos, map.x_max, map.y_max)) {
                        nouv = createNode(n->x, n->y+1, map.costs[n->x][n->y+1], n->ori);
                        break;
                    }
                    else{
                        return NULL;
                    }
                case EAST :
                    pos.x = n->x-1;
                    pos.y = n->y;
                    if (isValidLocalisation(pos, map.x_max, map.y_max)) {
                        nouv = createNode(n->x-1, n->y, map.costs[n->x-1][n->y], n->ori);
                        break;
                    }
                    else{
                        return NULL;
                    }
                case SOUTH :
                    pos.x = n->x;
                    pos.y = n->y-1;
                    if (isValidLocalisation(pos, map.x_max, map.y_max)) {
                        nouv = createNode(n->x, n->y-1, map.costs[n->x][n->y-1], n->ori);
                        break;
                    }
                    else{
                        return NULL;
                    }
                case WEST :
                    pos.x = n->x+1;
                    pos.y = n->y;
                    if (isValidLocalisation(pos, map.x_max, map.y_max)) {
                        nouv = createNode(n->x+1, n->y, map.costs[n->x+1][n->y], n->ori);
                        break;
                    }
                    else{
                        return NULL;
                    }
                default :
                    return NULL;
            }
            break;
        case 5:
            switch(n->ori){
                case NORTH :
                    pos.x = n->x;
                    pos.y = n->y;
                    if (isValidLocalisation(pos, map.x_max, map.y_max)) {
                        nouv = createNode(n->x, n->y, map.costs[n->x][n->y], WEST);
                        break;
                    }
                    else{
                        return NULL;
                    }
                case EAST :
                    pos.x = n->x;
                    pos.y = n->y;
                    if (isValidLocalisation(pos, map.x_max, map.y_max)) {
                        nouv = createNode(n->x, n->y, map.costs[n->x][n->y], NORTH);
                        break;
                    }
                    else{
                        return NULL;
                    }
                case SOUTH :
                    pos.x = n->x;
                    pos.y = n->y;
                    if (isValidLocalisation(pos, map.x_max, map.y_max)) {
                        nouv = createNode(n->x, n->y, map.costs[n->x][n->y], EAST);
                        break;
                    }
                    else{
                        return NULL;
                    }
                case WEST :
                    pos.x = n->x;
                    pos.y = n->y;
                    if (isValidLocalisation(pos, map.x_max, map.y_max)) {
                        nouv = createNode(n->x, n->y, map.costs[n->x][n->y], SOUTH);
                        break;
                    }
                    else{
                        return NULL;
                    }
                default :
                    return NULL;
            }
            break;
        case 6 :
            switch(n->ori){
                case NORTH :
                    pos.x = n->x;
                    pos.y = n->y;
                    if (isValidLocalisation(pos, map.x_max, map.y_max)) {
                        nouv = createNode(n->x, n->y, map.costs[n->x][n->y], EAST);
                        break;
                    }
                    else{
                        return NULL;
                    }
                case EAST :
                    pos.x = n->x;
                    pos.y = n->y;
                    if (isValidLocalisation(pos, map.x_max, map.y_max)) {
                        nouv = createNode(n->x, n->y, map.costs[n->x][n->y], SOUTH);
                        break;
                    }
                    else{
                        return NULL;
                    }
                case SOUTH :
                    pos.x = n->x;
                    pos.y = n->y;
                    if (isValidLocalisation(pos, map.x_max, map.y_max)) {
                        nouv = createNode(n->x, n->y, map.costs[n->x][n->y], WEST);
                        break;
                    }
                    else{
                        return NULL;
                    }
                case WEST :
                    pos.x = n->x;
                    pos.y = n->y;
                    if (isValidLocalisation(pos, map.x_max, map.y_max)) {
                        nouv = createNode(n->x, n->y, map.costs[n->x][n->y], NORTH);
                        break;
                    }
                    else{
                        return NULL;
                    }
                default :
                    return NULL;
            }
            break;
        case 7:
            switch(n->ori){
                case NORTH :
                    pos.x = n->x;
                    pos.y = n->y;
                    if (isValidLocalisation(pos, map.x_max, map.y_max)) {
                        nouv = createNode(n->x, n->y, map.costs[n->x][n->y], SOUTH);
                        break;
                    }
                    else{
                        return NULL;
                    }
                case EAST :
                    pos.x = n->x;
                    pos.y = n->y;
                    if (isValidLocalisation(pos, map.x_max, map.y_max)) {
                        nouv = createNode(n->x, n->y, map.costs[n->x][n->y], WEST);
                        break;
                    }
                    else{
                        return NULL;
                    }
                case SOUTH :
                    pos.x = n->x;
                    pos.y = n->y;
                    if (isValidLocalisation(pos, map.x_max, map.y_max)) {
                        nouv = createNode(n->x, n->y, map.costs[n->x][n->y], NORTH);
                        break;
                    }
                    else{
                        return NULL;
                    }
                case WEST :
                    pos.x = n->x;
                    pos.y = n->y;
                    if (isValidLocalisation(pos, map.x_max, map.y_max)) {
                        nouv = createNode(n->x, n->y, map.costs[n->x][n->y], EAST);
                        break;
                    }
                    else{
                        return NULL;
                    }
                default :
                    return NULL;
            }
            break;
        default:
            return NULL;
    }
    return nouv;
}

p_node addSons(p_node node, t_stack val, t_map map){
    if (val.nbElts >= 1)
        node->son1 = projection(val.values[0], node, map);
    if (val.nbElts >=2)
        node->son2 = projection(val.values[1], node, map);
    if (val.nbElts >= 3)
        node->son3 = projection(val.values[2], node, map);
    if (val.nbElts >= 4)
        node->son4 = projection(val.values[3], node, map);
    if (val.nbElts == 5)
        node->son5 = projection(val.values[4], node, map);
    return node;
}

t_tree createTreeFromStack(t_stack stack, t_localisation pos, t_map map){
    t_tree nouv = createEmptyTree();
    t_map m = map;
    nouv.root = createNode(pos.pos.x, pos.pos.y, map.costs[pos.pos.x][pos.pos.y], pos.ori);
    t_stack temp = createStack(5);
    t_stack temp2 = createStack(5);
    addSons(nouv.root, stack, m);


    if (nouv.root->son1 != NULL){
        push(&temp, pop(&stack));
        addSons(nouv.root->son1, stack, m);
        if(nouv.root->son1->son1 != NULL){
            push(&temp, pop(&stack));
            addSons(nouv.root->son1->son1, stack, m);
            push(&stack, pop(&temp));
        }
        if(nouv.root->son1->son2 != NULL){
            push(&temp2, pop(&stack));
            push(&temp, pop(&stack));
            push(&stack, pop(&temp2));
            addSons(nouv.root->son1->son2, stack, m);
            push(&temp2, pop(&stack));
            push(&stack, pop(&temp));
            push(&stack, pop(&temp2));
        }
        if (nouv.root->son1->son3 != NULL){
            push(&temp2, pop(&stack));
            push(&temp2, pop(&stack));
            push(&temp, pop(&stack));
            push(&stack, pop(&temp2));
            push(&stack, pop(&temp2));
            addSons(nouv.root->son1->son3, stack, m);
            push(&temp2, pop(&stack));
            push(&temp2, pop(&stack));
            push(&stack, pop(&temp));
            push(&stack, pop(&temp2));
            push(&stack, pop(&temp2));
        }
        if (nouv.root->son1->son4 !=NULL){
            push(&temp2, pop(&stack));
            push(&temp2, pop(&stack));
            push(&temp2, pop(&stack));
            push(&temp, pop(&stack));
            push(&stack, pop(&temp2));
            push(&stack, pop(&temp2));
            push(&stack, pop(&temp2));
            addSons(nouv.root->son1->son4, stack, m);
            push(&temp2, pop(&stack));
            push(&temp2, pop(&stack));
            push(&temp2, pop(&stack));
            push(&stack, pop(&temp));
           push(&stack, pop(&temp2));
            push(&stack, pop(&temp2));
            push(&stack, pop(&temp2));
        }
        push(&stack, pop(&temp));
    }
    if(nouv.root->son2 != NULL){
        push(&temp2, pop(&stack));
        push(&temp, pop(&stack));
        push(&stack, pop(&temp2));
        addSons(nouv.root->son2, stack, m);
        if(nouv.root->son2->son1 != NULL){
            push(&temp, pop(&stack));
            addSons(nouv.root->son2->son1, stack, m);
            push(&stack, pop(&temp));
        }
        if(nouv.root->son2->son2 != NULL){
            push(&temp2, pop(&stack));
            push(&temp, pop(&stack));
            push(&stack, pop(&temp2));
            addSons(nouv.root->son2->son2, stack, m);
            push(&temp2, pop(&stack));
            push(&stack, pop(&temp));
            push(&stack, pop(&temp2));
        }
        if (nouv.root->son2->son3 != NULL){
            push(&temp2, pop(&stack));
            push(&temp2, pop(&stack));
            push(&temp, pop(&stack));
            push(&stack, pop(&temp2));
            push(&stack, pop(&temp2));
            addSons(nouv.root->son2->son3, stack, m);
            push(&temp2, pop(&stack));
            push(&temp2, pop(&stack));
            push(&stack, pop(&temp));
            push(&stack, pop(&temp2));
            push(&stack, pop(&temp2));
        }
        if (nouv.root->son2->son4 !=NULL){
            push(&temp2, pop(&stack));
            push(&temp2, pop(&stack));
            push(&temp2, pop(&stack));
            push(&temp, pop(&stack));
            push(&stack, pop(&temp2));
            push(&stack, pop(&temp2));
            push(&stack, pop(&temp2));
            addSons(nouv.root->son2->son4, stack, m);
            push(&temp2, pop(&stack));
            push(&temp2, pop(&stack));
            push(&temp2, pop(&stack));
            push(&stack, pop(&temp));
            push(&stack, pop(&temp2));
            push(&stack, pop(&temp2));
            push(&stack, pop(&temp2));
        }
        push(&temp2, pop(&stack));
        push(&stack, pop(&temp));
        push(&stack, pop(&temp2));
    }
    if (nouv.root->son3 != NULL){
        push(&temp2, pop(&stack));
        push(&temp2, pop(&stack));
        push(&temp, pop(&stack));
        push(&stack, pop(&temp2));
        push(&stack, pop(&temp2));
        addSons(nouv.root->son3, stack, m);
        if(nouv.root->son3->son1 != NULL){
            push(&temp, pop(&stack));
            addSons(nouv.root->son3->son1, stack, m);
            push(&stack, pop(&temp));
        }
        if(nouv.root->son3->son2 != NULL){
            push(&temp2, pop(&stack));
            push(&temp, pop(&stack));
            push(&stack, pop(&temp2));
            addSons(nouv.root->son3->son2, stack, m);
            push(&temp2, pop(&stack));
            push(&stack, pop(&temp));
            push(&stack, pop(&temp2));
        }
        if (nouv.root->son3->son3 != NULL){
            push(&temp2, pop(&stack));
            push(&temp2, pop(&stack));
            push(&temp, pop(&stack));
            push(&stack, pop(&temp2));
            push(&stack, pop(&temp2));
            addSons(nouv.root->son3->son3, stack, m);
            push(&temp2, pop(&stack));
            push(&temp2, pop(&stack));
            push(&stack, pop(&temp));
            push(&stack, pop(&temp2));
            push(&stack, pop(&temp2));
        }
        if (nouv.root->son3->son4 !=NULL){
            push(&temp2, pop(&stack));
            push(&temp2, pop(&stack));
            push(&temp2, pop(&stack));
            push(&temp, pop(&stack));
            push(&stack, pop(&temp2));
            push(&stack, pop(&temp2));
            push(&stack, pop(&temp2));
            addSons(nouv.root->son3->son4, stack, m);
            push(&temp2, pop(&stack));
            push(&temp2, pop(&stack));
            push(&temp2, pop(&stack));
            push(&stack, pop(&temp));
            push(&stack, pop(&temp2));
            push(&stack, pop(&temp2));
            push(&stack, pop(&temp2));
        }
        push(&temp2, pop(&stack));
        push(&temp2, pop(&stack));
        push(&stack, pop(&temp));
        push(&stack, pop(&temp2));
        push(&stack, pop(&temp2));
    }
    if (nouv.root->son4 != NULL){
        push(&temp2, pop(&stack));
        push(&temp2, pop(&stack));
        push(&temp2, pop(&stack));
        push(&temp, pop(&stack));
        push(&stack, pop(&temp2));
        push(&stack, pop(&temp2));
        push(&stack, pop(&temp2));
        addSons(nouv.root->son4, stack, m);
        if(nouv.root->son4->son1 != NULL){
            push(&temp, pop(&stack));
            addSons(nouv.root->son4->son1, stack, m);
            push(&stack, pop(&temp));
        }
        if(nouv.root->son4->son2 != NULL){
            push(&temp2, pop(&stack));
            push(&temp, pop(&stack));
            push(&stack, pop(&temp2));
            addSons(nouv.root->son4->son2, stack, m);
            push(&temp2, pop(&stack));
            push(&stack, pop(&temp));
            push(&stack, pop(&temp2));
        }
        if (nouv.root->son4->son3 != NULL){
            push(&temp2, pop(&stack));
            push(&temp2, pop(&stack));
            push(&temp, pop(&stack));
            push(&stack, pop(&temp2));
            push(&stack, pop(&temp2));
            addSons(nouv.root->son4->son3, stack, m);
            push(&temp2, pop(&stack));
            push(&temp2, pop(&stack));
            push(&stack, pop(&temp));
            push(&stack, pop(&temp2));
            push(&stack, pop(&temp2));
        }
        if (nouv.root->son4->son4 !=NULL){
            push(&temp2, pop(&stack));
            push(&temp2, pop(&stack));
            push(&temp2, pop(&stack));
            push(&temp, pop(&stack));
            push(&stack, pop(&temp2));
            push(&stack, pop(&temp2));
            push(&stack, pop(&temp2));
            addSons(nouv.root->son4->son4, stack, m);
            push(&temp2, pop(&stack));
            push(&temp2, pop(&stack));
            push(&temp2, pop(&stack));
            push(&stack, pop(&temp));
            push(&stack, pop(&temp2));
            push(&stack, pop(&temp2));
            push(&stack, pop(&temp2));
        }
        push(&temp2, pop(&stack));
        push(&temp2, pop(&stack));
        push(&temp2, pop(&stack));
        push(&stack, pop(&temp));
        push(&stack, pop(&temp2));
        push(&stack, pop(&temp2));
        push(&stack, pop(&temp2));
    }
    if (nouv.root->son5 != NULL){
        push(&temp2, pop(&stack));
        push(&temp2, pop(&stack));
        push(&temp2, pop(&stack));
        push(&temp2, pop(&stack));
        push(&temp, pop(&stack));
        push(&stack, pop(&temp2));
        push(&stack, pop(&temp2));
        push(&stack, pop(&temp2));
        push(&stack, pop(&temp2));
        addSons(nouv.root->son5, stack, m);
        if(nouv.root->son5->son1 != NULL){
            push(&temp, pop(&stack));
            addSons(nouv.root->son5->son1, stack, m);
            push(&stack, pop(&temp));
        }
        if(nouv.root->son5->son2 != NULL){
            push(&temp2, pop(&stack));
            push(&temp, pop(&stack));
            push(&stack, pop(&temp2));
            addSons(nouv.root->son5->son2, stack, m);
            push(&temp2, pop(&stack));
            push(&stack, pop(&temp));
            push(&stack, pop(&temp2));
        }
        if (nouv.root->son5->son3 != NULL){
            push(&temp2, pop(&stack));
            push(&temp2, pop(&stack));
            push(&temp, pop(&stack));
            push(&stack, pop(&temp2));
            push(&stack, pop(&temp2));
            addSons(nouv.root->son5->son3, stack, m);
            push(&temp2, pop(&stack));
            push(&temp2, pop(&stack));
            push(&stack, pop(&temp));
            push(&stack, pop(&temp2));
            push(&stack, pop(&temp2));
        }
        if (nouv.root->son5->son4 !=NULL){
            push(&temp2, pop(&stack));
            push(&temp2, pop(&stack));
            push(&temp2, pop(&stack));
            push(&temp, pop(&stack));
            push(&stack, pop(&temp2));
            push(&stack, pop(&temp2));
            push(&stack, pop(&temp2));
            addSons(nouv.root->son5->son4, stack, m);
            push(&temp2, pop(&stack));
            push(&temp2, pop(&stack));
            push(&temp2, pop(&stack));
            push(&stack, pop(&temp));
            push(&stack, pop(&temp2));
            push(&stack, pop(&temp2));
            push(&stack, pop(&temp2));
        }
        push(&temp2, pop(&stack));
        push(&temp2, pop(&stack));
        push(&temp2, pop(&stack));
        push(&temp2, pop(&stack));
        push(&stack, pop(&temp));
        push(&stack, pop(&temp2));
        push(&stack, pop(&temp2));
        push(&stack, pop(&temp2));
        push(&stack, pop(&temp2));
    }
    return nouv;
}

void displayTree(p_node root){
    if (root == NULL) {
        printf("NULL\n");
        return;
    }
    printf("%d ->", root->value);
    displayTree(root->son1);
}


p_node findMin(p_node node, t_map map){
    p_node min = node;
    if (node->son1 !=NULL){
        if (node->son1->value < min->value) {
            min = node->son1;
        }
        else {
            if (node->son1->value == min->value) {
                min = node->son1;
            }
        }
    }
    if (node->son2 !=NULL){
        if (node->son2->value < min->value) {
            min = node->son2;
        }
        else {
            if (node->son2->value == min->value) {
                min = node->son2;
            }
        }
    }
    if(node->son3 !=NULL){
        if (node->son3->value < min->value) {
            min = node->son3;
        }
        else {
            if (node->son3->value == min->value) {
                min = node->son3;
            }
        }
    }
    if(node->son4 !=NULL){
        if (node->son4->value < min->value) {
            min = min->son4;
        }
        else {
            if (node->son4->value == min->value) {
                min = node->son4;
            }
        }
    }
    if(node->son5 !=NULL){
        if (node->son5->value < min->value) {
            min = node->son5;
        }
        else{
            if (node->son5->value == min->value){
                min = node->son5;
            }
        }
    }
    if (node->son1 == node->son2 == node->son3 == node->son4 == node->son5 == NULL) {
        return min;
    }
    else {
        return findMin(min, map);
    }
}