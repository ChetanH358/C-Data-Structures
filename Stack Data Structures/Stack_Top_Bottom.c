#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr; // integer pointer for dynamic memory allocation
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1; // true
    }
    else
    {
        return 0; // false
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

void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

// Peek Operation
int peek(struct stack *sp, int i)
{
    int ArrayInd = sp->top - i + 1;
    if (ArrayInd < 0)
    {
        printf("Not a valid position for the stack");
        return -1;
    }
    else
    {
        return sp->arr[ArrayInd];
    }
}

// Accessing top most element ------->>>>
int stackTop(struct stack *sp)
{
    return sp->arr[sp->top];
}
// Accessing bottom most element --------->>>>
int stackBottom(struct stack *sp)
{
    return sp->arr[0];
}

/*programme is copied from Operations_on_Stack the only changes done is increased
 size to 50 and calling stack top and stack bottom in print function*/
int main()
{

    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    // struct poiter -->sp  : stores the adress of the structure
    sp->size = 50;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully\n");
    printf("Before pushing, Full: %d\n", isFull(sp));
    printf("Before pushing, Empty: %d\n", isEmpty(sp));
    push(sp, 1);
    push(sp, 23);
    push(sp, 99);
    push(sp, 75);
    push(sp, 3);
    push(sp, 64);
    push(sp, 57);
    push(sp, 46);
    push(sp, 89);
    push(sp, 6);
    push(sp, 5);
    push(sp, 75);

    printf("The Top most value of this stack is %d \n", stackTop(sp));
    printf("The Bottom most value of this stack is %d \n", stackBottom(sp));

    return 0;
}
