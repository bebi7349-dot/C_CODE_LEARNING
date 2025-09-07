#include <stdio.h>

// function definition
int multiply(int a, int b) {
    return a * b;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    int result = multiply(x, y); // function call
    printf("Multiplication = %d\n", result);

    return 0;
}
