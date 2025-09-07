#include <stdio.h>
struct Point {
 int x;
 int y;
};
void display(struct Point p) {
 printf("Point coordinates: (%d, %d)\n", p.x, p.y);
}
int main() {
 struct Point pt;
 printf("Enter x and y coordinates: ");
 scanf("%d %d", &pt.x, &pt.y);
 return 0;
}k