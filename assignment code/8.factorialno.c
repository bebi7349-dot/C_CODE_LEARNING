#include <stdio.h>
int main() {
 int n = 5, i;
 long long fact = 1;
 for(i = 1; i <= n; i++)
 fact *= i;
 printf("Factorial = %lld\n", fact);
 return 0;
}