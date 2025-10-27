#include <stdio.h>

// Function to find the intersection
void findIntersection(int a[], int n, int b[], int m)
{
    printf("Intersection: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                printf("%d ", a[i]);
                break;
            }
        }
    }
    printf("\n");
}

// Function to find the union
void findUnion(int a[], int n, int b[], int m)
{
    int i, j;
    printf("Union: ");

    // Print all elements of first array
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    // Print only those elements of second array that are not in first array
    for (i = 0; i < m; i++)
    {
        int found = 0;
        for (j = 0; j < n; j++)
        {
            if (b[i] == a[j])
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            printf("%d ", b[i]);
        }
    }
    printf("\n");
}

int main()
{
    int a[] = {1, 2, 4, 5, 6};
    int b[] = {2, 3, 5, 7};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);

    findUnion(a, n, b, m);
    findIntersection(a, n, b, m);

    return 0;
}