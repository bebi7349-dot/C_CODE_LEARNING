#include <stdio.h>

struct Address {
    char city[20];
    int pin;
};

struct Student {
    int roll;
    char name[50];
    struct Address addr;
};

int main() {
    struct Student s1 = {101, "Ravi", {"Delhi", 110001}};

    printf("Roll: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("City: %s\n", s1.addr.city);
    printf("Pin: %d\n", s1.addr.pin);

    return 0;
}
