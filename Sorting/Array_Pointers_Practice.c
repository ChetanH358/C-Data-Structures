#include <stdio.h>

// ==== Array pointers Basic practice =====>>>>>>>>>>>>>>>>

void PrintArray(int *ptr, int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("the value of element %d is %d \n", i + 1, *(ptr + i));
    }

    for (int i = 0; i < n; i++)
    {
        printf("the value of element %d is %d \n", i + 1, ptr[i]);
    }
}

void PointerOperation(int *ptr) // arr or &arr[0] = 205520384
{
    // storing the adress in variable ptr so it looks something like this int *ptr = arr

    printf("%d \n", ptr); // 205520384

    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", ptr[i]); // ptr[i] = &arr[o] , ptr[i] = &arr[1] and goes on
        /* ptr is now storing adress so we can adress of first element of the array
        we can print the elements directly by array or by pointer airthmatic by using
        deferance operator*/

        printf("%d \n", *(ptr + i));
        /* ( ptr + i ) ===>>>  || ptr -> &arr[0] (205520384) || i -> 1,2,3,4,5 */
        /*
         &arr[0]   + 0 x 4bytes = 12
         205520384 + 0        = 12

         &arr[1]   + 1 x 4bytes = 54
         205520384 + 4       = 54

         &arr[2]   + 2 x 4bytes = 65
         205520384 + 8       = 65
         */
    }
}

int main()
{

    // int arr[] = {1, 2, 34, 3, 64, 53};
    // PrintArray(arr, 7);

    int arr[] = {2, 87, 98, 34, 77};
    PointerOperation(arr);
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", arr[i]);
    }

    // int *ptr = arr; // Internally it look like this  &arr[0]

    // printf("%d \n", arr);     // 205520384
    // printf("%d \n", &arr[0]); // 205520384

    return 0;
}