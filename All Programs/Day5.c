#include <stdio.h>

void rearrange(int arr[], int n) {
    int j = 0; // pointer for the next negative number position

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            // swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++; // move j to next position
        }
    }
}

int main() {
    int arr[] = { -1, 2, -3, 4, 5, -6, -7, 8 };

    // To Know no. of elements in array
    int n = sizeof(arr) / sizeof(arr[0]);
 
    rearrange(arr, n);

    printf("Array after rearranging:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
