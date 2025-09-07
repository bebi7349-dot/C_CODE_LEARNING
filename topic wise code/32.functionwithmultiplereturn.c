#include <stdio.h>

void sumDiff(int a, int b, int *sum, int *diff) {
    *sum = a + b;
    *diff = a - b;
}

int main() {
    int a = 10, b = 5;
    int s, d;
    sumDiff(a, b, &s, &d);
    printf("Sum = %d, Difference = %d\n", s, d);
    return 0;
}
