#include <stdio.h>
#include <stdlib.h> 

#define MAX 10

struct Stack{
    int *buf;
    int top;
};
struct Stack * Create();
void Push(struct Stack *stack, int item);
int Pop(struct Stack *stack);
int isEmpty(struct Stack *stack);
int isFull(struct Stack *stack);

int main(){
    struct Stack *stack = Create();
    Push(stack,10);
    Push(stack,20);
    Push(stack,30);
    Push(stack,40);
    printf("%d\n", Pop(stack));
    printf("%d\n", Pop(stack));
    return 1;
}

void Push(struct Stack *stack, int item){
    if(isFull(stack)){
        printf("Stack is Full! \n");
        return;
    }
    stack->buf[++stack->top] = item;
    printf("Inserted item %d \n",item);
}

int Pop(struct Stack *stack){
    if (isEmpty(stack))
        return -111;
    return (stack->buf[stack->top--]);
}

int isEmpty(struct Stack *stack){
    return (stack->top == -1)? 1 : 0;
}

int isFull(struct Stack *stack){
    return (stack->top == MAX -1) ? 1 : 0 ;
}

struct Stack * Create(){
    struct Stack *stack = (struct Stack *) malloc(sizeof(struct Stack));
    stack->top = -1;
    stack->buf = (int *) malloc(sizeof(int) * MAX);
    return stack;
}