#include <stdio.h>
int main() {
    int i = 1;
start:
    if (i <= 5) {
        printf("%d ", i);
        i++;
        goto start; // jump back
    }
    return 0;
}
