#include <stdio.h>

void hello() {
    printf("Hello from function pointer!\n");
}

int main() {
    void (*fp)();  // function pointer
    fp = hello;    // assign function address
    fp();          // call function using pointer
    return 0;
}
