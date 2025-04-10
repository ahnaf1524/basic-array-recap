#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int arr[] = {10, 20, 5, 8, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    swap(&arr[0], &arr[size - 1]);
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    return 0;
}