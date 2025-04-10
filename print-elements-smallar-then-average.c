#include<stdio.h>
int main() {
  int arr[4] = {4 , 8 , 12 , 20};
  int len = sizeof(arr) / sizeof(arr[0]) , sum = 0;
  float avg = 0.0;
  for(int i = 0; i < len; ++i) {
    sum += arr[i];
  }
  avg = (float) sum / len;
  for(int i = 0; i < len; ++i) {
    if(avg > arr[i]) {
      printf("%d ",arr[i]);
    }
  }
  return 0;
}  