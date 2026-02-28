#include <stdio.h>

void main() {
    int a, b, rows, d;
    printf("Enter a number of rows: ");
    scanf("%d", &rows);

    for (a = 1; a <= rows; a++, d = 0) {
        for (b = 1; b <= rows - a; b++) {
            printf(" ");
        }
        while (d != 2 * a - 1) {
            if (d % 2 == 0) {
                printf("^");
            } else {
                printf(" ");
            }
            d++;
        }
        printf("\n");
    }
}











