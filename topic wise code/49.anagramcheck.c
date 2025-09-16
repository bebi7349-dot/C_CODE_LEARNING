#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int count1[26] = {0}, count2[26] = {0};
    int i, flag = 1;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    for(i=0; str1[i] != '\0'; i++)
        if(isalpha(str1[i]))
            count1[tolower(str1[i]) - 'a']++;

    for(i=0; str2[i] != '\0'; i++)
        if(isalpha(str2[i]))
            count2[tolower(str2[i]) - 'a']++;

    for(i=0; i<26; i++) {
        if(count1[i] != count2[i]) {
            flag = 0;
            break;
        }
    }

    if(flag) printf("Strings are Anagrams\n");
    else printf("Not Anagrams\n");
    return 0;
}
