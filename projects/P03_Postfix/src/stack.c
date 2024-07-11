#include "graph.h"

struct Stack * createstack(unsigned capacity, int error)
{
    struct Stack *stack = (struct Stack*) malloc(sizeof(struct Stack));

    if(!stack)
        error = 0;

    stack->top = -1;
    stack->capacity = capacity;
    stack->array = (int*) malloc(sizeof(capacity) * sizeof(int));

    if(!stack->array)
        error = 0;
    
    return stack;
}

int isempty(struct Stack *stack)
{
    return stack->top == -1;
}

char peek(struct Stack *stack)
{
    return stack->array[stack->top];
}

char pop(struct Stack *stack)
{
    if(!isempty(stack))
        return stack->array[stack->top--];
    return '$';
}

void push(struct Stack *stack, char op)
{
    stack->array[++stack->top] = op;
}