#include <stdio.h>
void calculate(int a, int b, int *sum, int *diff) {
 *sum = a + b;
 *diff = a - b;
}
int main() {
 int x, y, sum, diff;
 printf("Enter two numbers: ");
 scanf("%d%d", &x, &y);
 calculate(x, y, &sum, &diff);
 printf("Sum = %d\n", sum);
 printf("Difference = %d\n", diff);
 return 0;
}