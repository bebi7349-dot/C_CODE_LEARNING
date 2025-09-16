#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data d;

    d.i = 10;
    printf("d.i = %d\n", d.i);

    d.f = 22.5;
    printf("d.f = %.2f\n", d.f);

    strcpy(d.str, "Hello");
    printf("d.str = %s\n", d.str);

    return 0;
}
