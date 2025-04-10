#include <stdio.h>
int main() {
  int arr[] = {10, 20, 10, 30, 20, 40};
  int len = sizeof(arr) / sizeof(arr[0]);
  int unique[100];
  int uniqueLen = 0;

  printf("\n");
  printf("Array Before removing duplicates: ");
  for (int i = 0; i < len; ++i) {
    printf("%d ", arr[i]);
  }


  for(int i = 0; i < len; ++i) {
    int already = 0;
    for(int j = 0; j < uniqueLen; ++j) {
      if(arr[i] == unique[j]) {
        already = 1;
        break;
      }
    }
    if(!already) {
      unique[uniqueLen] = arr[i];
      uniqueLen++;
    }
  }
  printf("\n");
  printf("Array after removing duplicates: ");
  for (int i = 0; i < uniqueLen; ++i) {
    printf("%d ", unique[i]);
  }
  return 0;
}