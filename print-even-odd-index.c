#include <stdio.h>
int main() {
  int n;
  scanf("%d",&n);
  int arr[n] , even[100] , odd[100] , even_len = 0 , odd_len = 0;
  for(int i = 0; i < n; ++i) {
    scanf("%d",&arr[i]);
    if(i % 2 == 0) {
      even[even_len] = arr[i];
      even_len++;
    }
    else {
      odd[odd_len] = arr[i];
      odd_len++;
    }
  } 
  printf("Elements at even indices: ");
  for(int i = 0; i < even_len; ++i) {
    printf("%d ",even[i]);
  }
  printf("\n");
  printf("Elements at odd indices: ");
  for(int i = 0; i < odd_len; ++i) {
    printf("%d ",odd[i]);
  }
  return 0;
}