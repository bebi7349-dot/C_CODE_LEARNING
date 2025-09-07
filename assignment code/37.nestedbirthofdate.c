#include <stdio.h>
struct Date {
 int day;
 int month;
 int year;
};
struct Student {
 char name[50];
 struct Date dob;
};
int main() {
 struct Student s1;
 printf("Enter name: ");
 scanf(" %[^\n]", s1.name);
 printf("Enter date of birth (dd mm yyyy): ");
 scanf("%d %d %d", &s1.dob.day, &s1.dob.month, &s1.dob.year);
 printf("\nStudent Details:\n");
 printf("Name: %s\n", s1.name);
 printf("DOB: %02d-%02d-%d\n", s1.dob.day, s1.dob.month, s1.dob.year);
 return 0;
}