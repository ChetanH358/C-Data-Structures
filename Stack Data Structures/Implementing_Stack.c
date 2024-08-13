#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    struct stack *S1_ptr = (struct stack *)malloc(sizeof(struct stack));
    // -------------->
    // struct stack S1; // operation
    // struct stack *S1_ptr = &S1;
    // -------------->
    S1_ptr->size = 10;
    // S1_ptr->top = -1;
    S1_ptr->arr = (int *)malloc(S1_ptr->size * sizeof(int));

    // pushing an element manually
    S1_ptr->arr[0] = 7;
    S1_ptr->top++;

    // check if stack is empty
    if (isEmpty(S1_ptr))
    {
        printf("The stack is Empty");
    }
    else
    {
        printf("The stack is Not Empty");
    }
    return 0;
}
