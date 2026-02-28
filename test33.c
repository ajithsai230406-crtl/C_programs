#include <stdio.h>

int main() {
    FILE *fs, *ft;
    char ch;

    fs = fopen("abc.txt", "r");
    if (fs == NULL) {
        printf("Error: Could not open source file\n");
        return 1;
    }

    ft = fopen("def.txt", "w");
    if (ft == NULL) {
        printf("Error: Could not open destination file\n");
        fclose(fs);
        return 1;
    }

    while ((ch = fgetc(fs)) != EOF)
        {
        fputc(ch, ft);
    }

    fclose(fs);
    fclose(ft);

    printf("File copied successfully.\n");
    return 0;
}



