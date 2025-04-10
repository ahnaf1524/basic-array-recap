#include <stdio.h>
int main() {
  int arr[] = {1 , 3, 5, 7, 9};
  int len = sizeof(arr) / sizeof(arr[0]);

  int is_increasing = 1, is_decreasing = 1;
  for(int i = 0; i < len; ++i) {
    if(arr[i] <= arr[i - 1]) {
      is_increasing = 0;
    }
    if(arr[i] >= arr[i - 1]) {
      is_decreasing = 0;
    }

  }

  if(is_increasing) {
    printf("Array is strictly increasing.\n");
  }
  else if(is_decreasing) {
    printf("Array is strictly decreasing.\n");
  }  
  else {
    printf("Array is neither strictly increasing nor decreasing.\n");
  }
  return 0;
}