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

int indInsertion(int arr[], int size, int element, int capacity, int index)
{
    // code for insertation
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main()
{
    int arr[20] = {7, 8, 12, 27, 88, 56, 67, 79, 31};
    int size = 9, element = 45, index = 6;
    display(arr, size);
    indInsertion(arr, size, element, 20, index); // ind ---> index
    size += 1;
    display(arr, size);
    return 0;
}