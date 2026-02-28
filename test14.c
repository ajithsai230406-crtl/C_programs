/* : : : To Display the n number of even digits in a pyramid form : : : */
#include <stdio.h>

void main()
{
    int rows,j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("The pyramid of '1 - %d' rows are :\n\n\n",rows);
    for (int i = 1; i <= rows; i++)
        {
        // Print spaces to align the numbers
        for (int space = 1; space <= rows - i; space++)
        {
            printf("  ");
        }
        // Print odd numbers
        for ( j = 1; j <= 2 * i - 1; j++)
        {
            printf("%d ", 2 * j - 1);
        }
        printf("\n"); // Move to the next row
    }
    printf("\n\nThe number of odd numbers in the last row are %d",j);
}
