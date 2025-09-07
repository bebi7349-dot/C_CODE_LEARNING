#include <stdio.h>
int main() {
    int marks;
    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 90)
        printf("Grade: A\n");
    else if (marks >= 75)
        printf("Grade: B\n");
    else if (marks >= 50)
        printf("Grade: C\n");
    else if (marks >= 35)
        printf("Grade: D\n");
    else
        printf("Grade: Fail\n");

    return 0;
}
