#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("abc.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}

