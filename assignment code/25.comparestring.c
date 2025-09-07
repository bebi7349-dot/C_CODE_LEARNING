#include <stdio.h>
int stringCompare(char str1[], char str2[]) {
 int i = 0;
 while (str1[i] != '\0' && str2[i] != '\0') {
 if (str1[i] != str2[i])
 return str1[i] - str2[i];
 i++;
 }
 return str1[i] - str2[i];
}
int main() {
 char str1[100], str2[100];
 printf("Enter first string: ");
 fgets(str1, sizeof(str1), stdin);
 printf("Enter second string: ");
 fgets(str2, sizeof(str2), stdin);
 int result = stringCompare(str1, str2);
 if (result == 0)
 printf("Strings are equal.\n");
 else if (result < 0)
 printf("First string is less than second.\n");
 else
 printf("First string is greater than second.\n");
 return 0;
}