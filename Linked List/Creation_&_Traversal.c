#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Elemnet : %d \n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    // struct Node h;
    // struct Node *head = &h;
    struct Node *head;
    // struct Node s;
    // struct Node *second = &s;
    struct Node *second;
    // struct Node t;
    // struct Node *third = &t;
    struct Node *third;
    // struct Node f;
    // struct Node *fourth = &f;
    struct Node *fourth;

    // Allocate memory for nodes in the liked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;
    // Link second and third nodes
    second->data = 11;
    second->next = third;
    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;
    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;
    LinkedListTraversal(head);
    return 0;
}