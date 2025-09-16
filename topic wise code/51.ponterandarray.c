#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;  // pointer to first element

    printf("Array elements using pointer:\n");
    for(int i=0; i<5; i++) {
        printf("%d ", *(p+i));  // same as arr[i]
    }
    return 0;
}
