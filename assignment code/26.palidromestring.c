#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
 char str[100];
 int i, j, flag = 1;
 printf("Enter a string: ");
 fgets(str, sizeof(str), stdin);
 int len = strlen(str);
 if (str[len-1] == '\n') str[len-1] = '\0'; // Remove newline
 len = strlen(str);
 i = 0; j = len - 1;
 while (i < j) {
 if (tolower(str[i]) != tolower(str[j])) {
 flag = 0;
 break;
 }
 i++;
 j--;
 }
 if (flag)
 printf("String is a palindrome.\n");
 else
 printf("String is not a palindrome.\n");
 return 0;
}