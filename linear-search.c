#include <stdio.h>
#include <stdbool.h>
int main() {
  int arr[] = {10, 20, 5, 8, 25};
  int size = sizeof(arr) / sizeof(arr[0]);
  int target , pos;
  bool found = false;
  scanf("%d",&target);
  for(int i = 0; i < size; ++i) {
    if(arr[i] == target) {
      found = true;
      pos = i;
      break;
    }
  }
  if(found) {
    printf("%d found at index %d\n",target,pos);
  }
  else {
    printf("%d not found in the array\n",target);
  }
  return 0;
}