#include <stdio.h>
int main() {
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i = 0; i < n; ++i) {
    scanf("%d",&arr[i]);
  }
  int mx = arr[0];
  for(int i = 0; i < n; ++i) {
    if(arr[i] > mx) {
      mx = arr[i];
    }
  }
  printf("Max value is %d\n",mx);
  return 0;
}