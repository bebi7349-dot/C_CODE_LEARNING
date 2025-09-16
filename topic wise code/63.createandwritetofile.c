#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("test.txt", "w");   // open file in write mode

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Hello, this is a test file.\n");
    fprintf(fp, "C programming file handling example.\n");

    fclose(fp);  // close file
    printf("Data written successfully.\n");
    return 0;
}
