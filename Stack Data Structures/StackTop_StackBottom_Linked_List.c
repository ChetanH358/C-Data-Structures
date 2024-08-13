#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(struct Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct Node *top)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node *push(struct Node *top, int x)
{
    if (isFull(top))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(struct Node *tp)
{
    if (isEmpty(tp))
    {
        printf("Stack Underflow\n");
    }
    else
    {
        struct Node *n = tp;
        top = (tp)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int peek(int pos)
{
    struct Node *ptr = top;
    for (int i = 0; (i < pos - 1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
    else
    {
        return -1;
    }
}

int stackTop(struct Node *ptr)
{
    return top->data;
}

int stackBottom()
{
    struct Node *k = top;
    while (k->next != NULL)
    {
        k = k->next;
    }
    return k->data;
}

int main()
{
    // printf("%d ", NULL);
    top = push(top, 28);
    top = push(top, 18);
    top = push(top, 15);
    top = push(top, 7);

    printf("Linked List Traversal after push opertaion \n");
    linkedListTraversal(top);

    int element = pop(top);
    printf("Popped element is %d\n", element);
    printf("Linked List Traversal after pop opertaion \n");
    linkedListTraversal(top);

    printf("Obtaining stack top value \n");
    int stack_Top = stackTop(top);
    printf("stack_Top value is %d \n", stack_Top);

    printf("Obtaining stack Bottom value \n");
    int stack_Bottom = stackBottom(top);
    printf("stack_Top value is %d \n", stack_Bottom);

    return 0;
}
