#include <stdio.h>
int main()
{
    int a[6];
    int n;
    int size = 6;

    printf("Enter the elements of array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the kth term:\n");
    scanf("%d", &n);

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    if (n > 0 && n <= size)
    {
        printf("\n%d  maximum number is %d\n", n, a[size - n]);
        printf("%d minimum number is %d\n", n, a[n - 1]);
    }

    return 0;
}