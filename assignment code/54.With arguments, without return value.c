#include <stdio.h>

// function definition
void printSum(int a, int b) {
    printf("Sum = %d\n", a + b);
}

int main() {
    int x = 5, y = 10;
    printSum(x, y); // function call with arguments
    return 0;
}
