#include <stdio.h>
#include <stdlib.h>
struct myArray
{
    int size;
    int top;
    int *arr;
};

/*Allocating memory Dynamically in heap for given struct myArray and run a for loop
and store all values af array (arr) in dynamically requested memory in array*/

int main()
{
    struct myArray *sp = (struct myArray *)malloc(sizeof(struct myArray));
    sp->size = 3;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    for (int i = 0; i <= sp->size; i++)
    {
        printf("Enter value of marks %d \n", i + 1);
        sp->top++;
        scanf("%d", &sp->arr[sp->top]); // & ->ampersand symbol is must
    }
    for (int i = 0; i <= sp->size; i++)
    {
        printf("the value of marks %d \n", sp->arr[i]);
    }

    // int marks[4];
    // int *ptr;
    // ptr = &marks[0];
    // // ptr = marks;
    // for (int i = 1; i <= 4; i++)
    // {
    //     printf("Enter value of marks %d \n", i);
    //     scanf("%d", ptr);
    //     ptr++;
    // }

    // for (int i = 1; i <= 4; i++)
    // {
    //     printf("value of marks %d \n", marks[i]);
    // }

    return 0;
}