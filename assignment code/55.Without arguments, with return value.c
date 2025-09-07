#include <stdio.h>

// function definition
int getNumber() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;
}

int main() {
    int num = getNumber(); // function returns value
    printf("You entered: %d\n", num);
    return 0;
}
