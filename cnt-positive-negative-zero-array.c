#include <stdio.h>
int main() {
  int n;
  scanf("%d",&n);
  int arr[n];
  int positive = 0, negative = 0, zero = 0;
  for(int i = 0; i < n; ++i) {
    scanf("%d",&arr[i]);
    if(arr[i] > 0) {
      positive++;
    }
    else if(arr[i] == 0) {
      zero++;
    }
    else if(arr[i] < 0) {
      negative++;
    }
  } 
  printf("Total %d positive elements\n",positive);
  printf("Total %d negative elements\n",negative);
  printf("Total %d zero elements\n", zero);
  return 0;
}