//
// Created by thiba on 22/11/2024.
//

#ifndef PROJET_SEMESTRE_3_STACK_H
#define PROJET_SEMESTRE_3_STACK_H

/**
 * @brief Structure for the stack of integers
 */
typedef struct s_stack
{
    int *values;
    int size;
    int nbElts;
} t_stack;

/**
 * @brief Function to create a stack
 * @param size : the size of the stack
 * @return the stack
 */
t_stack createStack(int);

/**
 * @brief Function to push a value in the stack
 * @param pointer to the stack
 * @param value : the value to push
 * @return none
 */
void push(t_stack *, int);

/**
 * @brief Function to pop a value from the stack
 * @param : pointer to the stack
 * @return the value popped
 */
int pop(t_stack *);

/**
 * @brief Function to get the top value of the stack
 * @param stack : the stack
 * @return the top value
 */
int top(t_stack);


#endif //PROJET_SEMESTRE_3_STACK_H
