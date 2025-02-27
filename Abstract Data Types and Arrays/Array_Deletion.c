#include <stdio.h>

void display(int arr[], int n)
{
    // Code for Travarsal
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void indDeletion(int arr[], int size, int index)
{
    // code for deletion
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int arr[20] = {7, 8, 12, 27, 88, 56, 67, 79, 31};
    int size = 9, index = 3;
    display(arr, size);
    indDeletion(arr, size, index); // ind ---> index
    size -= 1;
    display(arr, size);
    return 0;
}