#include <stdio.h>
#include <stdlib.h>
int Binarysearch(int arr[], int size, int element);
int main()
{
    int arr[] = {1, 3, 5, 56, 4, 3, 23, 5, 14, 56, 34};
    int size = sizeof(arr) / sizeof(int);
    int element = 5;
    int SearchIndex = Binarysearch(arr, size, element);
    printf("The Element %d was found at index %d \n", element, SearchIndex);
    return 0;
}
int Binarysearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        return -1;
    }
}