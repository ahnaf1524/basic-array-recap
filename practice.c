#include <stdio.h>
int main() {

  int arr[] = {10, 20, 5, 8, 25};
  int size = sizeof(arr) / sizeof(arr[0]);
  printf("Before Reverse Array : ");
  for(int i = 0; i < size; ++i) {
    printf("%d ",arr[i]);
  }
  int start = 0 , end = size - 1;
  while(start < end) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    ++start;
    --end;
  }
  printf("After Reverse Array : ");
  for(int i = 0; i < size; ++i) {
    printf("%d ",arr[i]);
  }
  return 0;
}