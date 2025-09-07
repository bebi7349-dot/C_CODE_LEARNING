#include <stdio.h>

inline int square(int x) {
    return x * x;
}

int main() {
    printf("Square of 6 = %d\n", square(6));
    return 0;
}
