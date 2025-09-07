#include <stdio.h>

struct Student {
 int id;
 char name[50];
 float marks;
};
int main() {
 struct Student students[5], temp;
 int i, j;
 for (i = 0; i < 5; i++) {
 printf("Enter details of student %d\n", i + 1);
 printf("ID: ");
 scanf("%d", &students[i].id);
 printf("Name: ");
 scanf(" %[^\n]", students[i].name);
 printf("Marks: ");
 scanf("%f", &students[i].marks);
 }
 // Sorting in descending order of marks
 for (i = 0; i < 4; i++) {
 for (j = i + 1; j < 5; j++) {
 if (students[i].marks < students[j].marks) {
 temp = students[i];
 students[i] = students[j];
 students[j] = temp;
 }
 }
 }
 printf("\nStudents sorted by marks (descending):\n");
 for (i = 0; i < 5; i++) {
 printf("ID: %d, Name: %s, Marks: %.2f\n", students[i].id, students[i].name, s
 }
 return 0;
}