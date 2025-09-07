#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    fp = fopen("myfile.txt", "r"); // open file for reading
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Reading data from file:\n");
    while (fgets(text, sizeof(text), fp) != NULL) {
        printf("%s", text); // print line by line
    }

    fclose(fp);
    return 0;
}
