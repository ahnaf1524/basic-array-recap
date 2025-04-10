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
  printf("Even Sum : %d\n", even_sum);
  printf("Odd Sum : %d\n",odd_sum);
  return 0;
}   