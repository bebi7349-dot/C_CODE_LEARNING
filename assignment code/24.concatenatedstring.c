#include <stdio.h>
void stringConcat(char str1[], char str2[]) {
 int i = 0, j = 0;
 while (str1[i] != '\0') i++;
 while (str2[j] != '\0') {
 str1[i] = str2[j];
 i++;
 j++;
 }
 str1[i] = '\0';
}
int main() {
 char str1[200], str2[100];
 printf("Enter first string: ");
 fgets(str1, sizeof(str1), stdin);
 printf("Enter second string: ");
 fgets(str2, sizeof(str2), stdin);
 stringConcat(str1, str2);
 printf("Concatenated string: %s", str1);
 return 0;
}