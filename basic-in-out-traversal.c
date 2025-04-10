#include <stdio.h>
int main() {
    int arr[4] = {14 , 54 , 56 , 57};
    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < size; ++i) {
        printf("%d ",arr[i]);
    }   
    return 0;
}