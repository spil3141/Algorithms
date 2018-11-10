#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


struct Stack{
    unsigned capacity;
    int * array;
    int top;
};



struct Stack * Create(unsigned capacity);
int isEmpty(struct Stack *stack);
int isFull(struct Stack *stack);
void Push(struct Stack *stack,int item);
int Pop(struct Stack *stack);

int main(void){
    struct Stack *stack = Create(100);
    Push(stack,20);
    Push(stack, 21);
    Push(stack, 22);

    printf("%d was remove from stack.\n", Pop(stack));
    printf("%d was remove from stack.\n", Pop(stack)); 
    printf("%d was remove from stack.\n", Pop(stack));

    return 1;
}

void Push(struct Stack *stack, int item){
    if(isFull(stack))
        return;
    stack->array[++stack->top] = item;
    printf("%d push into stack.\n",item);
}
int Pop(struct Stack *stack){
    if(isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top--];
}

struct Stack * Create (unsigned capacity){
    struct Stack * stack = (struct Stack*) malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int *) malloc(stack->capacity * sizeof(int));
    printf("The Stack was Created!\n");
    return stack;
}
// 1 = Empty  0 = NOT_Empty
int isEmpty(struct Stack *stack){
    return (stack->top == -1) ? 1 : 0;
}
// 1 = Full 0 = Not_Full
int isFull(struct Stack *stack){
    return (stack->top == stack->capacity -1) ? 1 : 0;
}