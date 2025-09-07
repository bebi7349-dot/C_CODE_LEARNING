#include <stdio.h>
int main() {
 int n = 29, i, flag = 1;
 for(i = 2; i <= n / 2; i++) {
 if(n % i == 0) {
 flag = 0;
 break;
 }
 }
 if(flag)
 printf("%d is a Prime Number\n", n);
 else
 printf("%d is not a Prime Number\n", n);
return 0;
}