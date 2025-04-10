#include <stdio.h>
int main() {

  int arr[4] = {4 , 4 , 4 , 4};
  int len = sizeof(arr) / sizeof(arr[0]);
  int all_same = 1;
  
  for(int i = 1; i < len; ++i) {
    if(arr[i] != arr[0]) {
      all_same = 0;
      break;
    }
  }

  if(all_same) {
    printf("All elements are the same.\n");
  }
  else {
    printf("All elements are not the same.\n");
  }

  return 0;
}