#include <stdio.h>
int main() {
 int n = 1234, reversed = 0, remainder;
 while(n != 0) {
 remainder = n % 10;
 reversed = reversed * 10 + remainder;
 n /= 10;
 }
 printf("Reversed Number = %d\n", reversed);
 return 0;
}