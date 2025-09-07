#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    fp = fopen("myfile.txt", "w"); // open file for writing
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to write in file: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text); // write to file
    fclose(fp);

    printf("Data written successfully to myfile.txt\n");
    return 0;
}
