#include <stdio.h>
#include <string.h>

int main() {
  int arr1[] = {1, 2, 3};
  int arr2[] = {4, 5, 6};
  int size1 = sizeof(arr1) / sizeof(arr1[0]),
      size2 = sizeof(arr2) / sizeof(arr2[0]);
  int merge[size1 + size2];
  for (int i = 0; i < size1; ++i) {
    merge[i] = arr1[i];
  }
  for (int i = 0; i < size2; ++i) {
    merge[size1 + i] = arr2[i];
  }
  int merge_size = size1 + size2;
  for (int i = 0; i < merge_size; ++i) {
    printf("%d ", merge[i]);
  }
  return 0;
}
