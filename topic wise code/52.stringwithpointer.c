
#include <stdio.h>

int main() {
    char str[] = "Pointer Example";
    char *p = str;

    printf("String using pointer: ");
    while(*p != '\0') {
        printf("%c", *p);
        p++;
    }
    return 0;
}
