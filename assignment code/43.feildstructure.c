#include <stdio.h>
struct Flags {
 unsigned int is_bold : 1;
 unsigned int is_italic : 1;
 unsigned int is_underline : 1;
};
int main() {
 struct Flags f;
 f.is_bold = 1;
 f.is_italic = 0;
 f.is_underline = 1;
 printf("Bold: %u\n", f.is_bold);
 printf("Italic: %u\n", f.is_italic);
 printf("Underline: %u\n", f.is_underline);
 return 0;
}