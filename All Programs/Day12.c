#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    printf("Element %d occurs %d times in the array.\n", target, count);
    return 0;
}