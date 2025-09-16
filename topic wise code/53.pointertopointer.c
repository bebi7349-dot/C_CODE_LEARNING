#include <stdio.h>

int main() {
    int x = 100;
    int *p = &x;
    int **pp = &p;

    printf("Value of x = %d\n", x);
    printf("Using single pointer *p = %d\n", *p);
    printf("Using double pointer **pp = %d\n", **pp);
    return 0;
}
