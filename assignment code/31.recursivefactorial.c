#include <stdio.h>
unsigned long long factorial(int n) {
 if (n == 0 || n == 1)
 return 1;
 return n * factorial(n - 1);
}
int main() {
 int num;
 printf("Enter a positive integer: ");
 scanf("%d", &num);
 if (num < 0)
 printf("Factorial not defined for negative numbers.\n");
 else
 printf("Factorial of %d is %llu\n", num, factorial(num));
 return 0;
}