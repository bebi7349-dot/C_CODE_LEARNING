#include <stdio.h>
#include <string.h>
struct Student {
 int id;
 char name[50];
};
int compareStudents(struct Student s1, struct Student s2) {
 if (s1.id == s2.id && strcmp(s1.name, s2.name) == 0)
 return 1;
 else
 return 0;
}
int main() {
 struct Student s1, s2;
 printf("Enter details for student 1 (id name): ");
 scanf("%d %[^\n]", &s1.id, s1.name);
 printf("Enter details for student 2 (id name): ");
 scanf("%d %[^\n]", &s2.id, s2.name);
 if (compareStudents(s1, s2))
 printf("Students are equal.\n");
 else
 printf("Students are not equal.\n");
return 0;
}