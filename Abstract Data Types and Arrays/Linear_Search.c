#include <stdio.h>
#include <stdlib.h>
int linearsearch(int arr[], int size, int element);
int linearsearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 3, 5, 56, 4, 3, 23, 5, 14, 56, 34};
    int size = sizeof(arr) / sizeof(int);
    int element = 5;
    int SearchIndex = linearsearch(arr, size, element);
    printf("The Element %d was found at index %d \n", element, SearchIndex);
    return 0;
}