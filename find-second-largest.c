#include <stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; ++i) {
    scanf("%d", &arr[i]);
  }

  int max = -1e9, second_max = -1e9;
  for (int i = 0; i < n; ++i) {
    if (arr[i] > max) {
      second_max = max;
      max = arr[i];
    } else if (arr[i] > second_max && arr[i] < max) {
      second_max = arr[i];
    }
  }
  if (second_max == -1e9) {
    printf("No second maximum found (all elements may be equal).\n");
  } else {
    printf("Second Max value is %d\n", second_max);
  }
  return 0;
}