#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i, v=0, c=0, d=0, s=0;

    printf("Enter a string: ");
    gets(str);

    for(i=0; str[i] != '\0'; i++) {
        if(isalpha(str[i])) {
            char ch = tolower(str[i]);
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') v++;
            else c++;
        }
        else if(isdigit(str[i])) d++;
        else if(str[i]==' ') s++;
    }

    printf("Vowels = %d\nConsonants = %d\nDigits = %d\nSpaces = %d\n", v, c, d, s);
    return 0;
}
