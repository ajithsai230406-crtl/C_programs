#include <stdio.h>

int main() {
    FILE *fp;

    // Open the file in write mode
    fp = fopen("example.txt", "r");
    if (fp == NULL) {  // Check if file was created successfully
        printf("Error: Could not create file\n");
        return 1;
    }

    // Write data to the file
    fprintf(fp, "This is a line of text.\n");
    fputs("This is another line of text.\n", fp);

    // Close the file
    fclose(fp);

    printf("File created and data written successfully.\n");
    return 0;
}
