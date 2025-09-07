#include <stdio.h>
int main() {
 int n = 121, reversed = 0, original = n, remainder;
 while(n != 0) {
 remainder = n % 10;
 reversed = reversed * 10 + remainder;
 n /= 10;
 }
 if(original == reversed)
 printf("Palindrome\n");
 else
 printf("Not Palindrome\n");
return 0;
}