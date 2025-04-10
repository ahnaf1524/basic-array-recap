#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
  int arr[] = {10, 20, 30, 40, 50, 60};
  int len = sizeof(arr) / sizeof(arr[0]);

  printf("Before swapping adjacents : ");
  for(int i = 0; i < len; ++i) {
    printf("%d ",arr[i]);
  }

  for(int i = 0; i < len - 1; i+=2) {
    swap(&arr[i], &arr[i+1]);
  }
  printf("After swapping adjacents : ");
  for(int i = 0; i < len; ++i) {
    printf("%d ",arr[i]);
  }
  return 0;
}