#include <stdio.h>
int main() {
  int n , sum = 0;
  float average = 0.0;
  scanf("%d",&n);
  int arr[n];
  for(int i = 0; i < n; ++i) {
    scanf("%d",&arr[i]);
    sum += arr[i]; 
  }
  average = (float)sum / n;
  printf("Average : %.1f\n",average);
  return 0;
}   