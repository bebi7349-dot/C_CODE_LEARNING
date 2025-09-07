#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    fp = fopen("myfile.txt", "a"); // open file for appending
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to append in file: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp); // append to file
    fclose(fp);

    printf("Data appended successfully to myfile.txt\n");
    return 0;
}
