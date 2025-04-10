#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
  int arr[] = {10, 20, 30, 10, 10, 20};
  int len = sizeof(arr) / sizeof(arr[0]);
  int cnt = 0 , target;
  scanf("%d",&target);
  for(int i = 0; i < len; ++i) {
    if(arr[i] == target) {
      cnt++;
    }
  }
  printf("%d appear %d times in this array\n",target,cnt);
  return 0;
}