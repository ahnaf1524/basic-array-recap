#include <stdio.h>
int main() {
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i = 0; i < n; ++i) {
    scanf("%d",&arr[i]);
  }
  int mn = arr[0];
  for(int i = 0; i < n; ++i) {
    if(arr[i] < mn) {
      mn = arr[i];
    }
  }
  printf("Min value is %d\n",mn);
  return 0;
}