#include <stdio.h>

// Cyclically rotate an array by one.
void rotateByone(int arr[], int n)
{
    // store last element
    int last = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    rotateByone(arr, n);

    printf("Rotated array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}
