#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("test.txt", "a");   // open in append mode

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "This line is appended.\n");

    fclose(fp);
    printf("Data appended successfully.\n");
    return 0;
}
