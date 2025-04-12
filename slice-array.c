#include <stdio.h>
#include <string.h>

int main() {
  int arr[6] = {5, 10, 15, 7, 14, 21};
  int slice_arr[6];
  int starting, ending;
  scanf("%d %d", &starting, &ending);
  int len = 0;
  for (int i = starting; i <= ending; ++i) {
    slice_arr[len++] = arr[i];
  }
  for (int i = 0; i < len; ++i) {
    printf("%d ", slice_arr[i]);
  }
  return 0;
}
