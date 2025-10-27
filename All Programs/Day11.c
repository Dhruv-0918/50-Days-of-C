#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[100], pos[100], neg[100];
    int p = 0, q = 0;

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] >= 0)
        {
            pos[p] = arr[i];
            p = p++;
        }
        else
        {
            neg[q] = arr[i];
            q = q++;
        }
    }

    int i = 0, j = 0, k = 0;

    while (i < q && j < p)
    {
        arr[k] = neg[i]; // place negative
        i = i++;
        k = k++;

        arr[k] = pos[j]; // place positive
        j = j++;
        k = k++;
    }

    while (i < q)
    {
        arr[k] = neg[i];
        i = i++;
        k = k++;
    }

    while (j < p)
    {
        arr[k] = pos[j];
        j = j++;
        k = k++;
    }

    printf("Rearranged array:\n");
    for (int x = 0; x < n; x++)
        printf("%d ", arr[x]);

    return 0;
}
