#include <stdio.h>
int main() {
 int n = 10, first = 0, second = 1, next, i;
 for(i = 0; i < n; i++) {
 printf("%d ", first);
 next = first + second;
 first = second;
 second = next;
 }
 return 0;
}