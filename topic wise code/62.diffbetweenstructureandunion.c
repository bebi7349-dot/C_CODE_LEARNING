#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[20];
    float marks;
};

union StudentUnion {
    int roll;
    char name[20];
    float marks;
};

int main() {
    struct Student s1 = {101, "Raj", 90.5};
    union StudentUnion u1;

    u1.roll = 101;
    strcpy(u1.name, "Raj");
    u1.marks = 90.5;

    printf("Structure:\n");
    printf("Roll = %d, Name = %s, Marks = %.2f\n", s1.roll, s1.name, s1.marks);

    printf("\nUnion:\n");
    printf("Roll = %d\n", u1.roll);
    printf("Name = %s\n", u1.name);
    printf("Marks = %.2f\n", u1.marks);

    return 0;
}
