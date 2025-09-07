#include <stdio.h>
int stringLength(char str[]) {
 int length = 0;
 while (str[length] != '\0')
 length++;
 return length;
}
int main() {
 char str[100];
 printf("Enter a string: ");
 fgets(str, sizeof(str), stdin);
 printf("Length of string: %d\n", stringLength(str) - 1); // -1 to exclude newline
 return 0;
}
