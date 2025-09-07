#include <stdio.h>

int main() {
    char op;
    double a, b;
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    switch(op) {
        case '+': printf("= %.2f\n", a+b); break;
        case '-': printf("= %.2f\n", a-b); break;
        case '*': printf("= %.2f\n", a*b); break;
        case '/': printf("= %.2f\n", a/b); break;
        default: printf("Invalid operation\n");
    }
    return 0;
}
