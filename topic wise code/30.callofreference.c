#include <stdio.h>

void modifyValue(int *x) {
    *x = *x + 5;
    printf("Inside function: x = %d\n", *x);
}

int main() {
    int num = 10;
    modifyValue(&num);
    printf("Outside function: num = %d\n", num); // Original value changed
    return 0;
}
