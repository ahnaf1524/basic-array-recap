#include <stdio.h>

int main() {
  int arr[10] = {1, 2, 3, 4,
                 5};  // Initial array (size 10 to handle future additions)
  int size = 5;       // Current size of the array

  // 1. Remove 2 elements starting from index 2.
  int removes = 2;
  int starting_index = 2;
  for (int i = starting_index; i < size - removes; ++i) {
    arr[i] = arr[i + removes];
  }
  size -= removes;  // Adjust the size after removal

  // 2. Add elements 'a' and 'b' at index 1 (Note: Since we can't have 'a' and
  // 'b' in an integer array, assume we replace them with 6 and 7).
  int add_elements[] = {6, 7};  // Elements to add
  int add_count = 2;
  int insert_index = 1;

  // Shift elements after insert_index to make space for new elements
  for (int i = size - 1; i >= insert_index; --i) {
    arr[i + add_count] = arr[i];
  }

  // Insert new elements at index 1
  for (int i = 0; i < add_count; ++i) {
    arr[insert_index + i] = add_elements[i];
  }

  size += add_count;  // Adjust the size after addition

  // 3. Replace 1 element at index 4 with 'x' (Here we assume x is 8).
  arr[4] = 8;

  // Print the final array
  for (int i = 0; i < size; ++i) {
    printf("%d ", arr[i]);
  }

  return 0;
}
