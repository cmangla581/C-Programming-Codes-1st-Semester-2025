#include <stdio.h>
#include <ctype.h>  // for tolower()

int main() {
    FILE *fp;
    char ch;

    // Step 1: Open file for writing
    fp = fopen("letters.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    // Write characters from A to Z into the file
    for (ch = 'A'; ch <= 'Z'; ch++) {
        fputc(ch, fp);
    }
    fclose(fp);

    // Step 2: Open file for reading
    fp = fopen("letters.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    // Read characters and print them in lowercase
    printf("Characters in lowercase:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(tolower(ch));
    }

    fclose(fp);
    return 0;
}
