#include <stdio.h>
int main() {
  int n , even_sum = 0 , odd_sum = 0;
  scanf("%d",&n);
  int arr[n];
  for(int i = 0; i < n; ++i) {
    scanf("%d",&arr[i]);
    if(arr[i] % 2 == 0){
      even_sum += arr[i];
    }
    else if(arr[i] % 2 != 0) {
      odd_sum += arr[i];
    }
  }
  printf("Difference between even and odd sum %d\n",even_sum - odd_sum);
  return 0;
}   