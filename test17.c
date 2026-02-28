/* :: :: :: To Display the n number of even digits in a pyramid form :: :: :: */
#include<stdio.h>
void main()
{
   int rows,j;
   printf("Enter number of rows : ");
   scanf("%d",&rows);
   printf("The pyramid of '0 - %d' rows are :\n\n\n",rows);
   for(int i =0; i<=rows ; i++)
   {
    // Print spaces to align the numbers
   for(int space = 1; space<=rows - i ; space++)
   {
    printf("  ");
   }
   // Print even numbers
   for( j = 0; j<=2 * i ; j++)
   {
    printf("%d ",2 * j);
    }
    printf("\n"); // Move to the next row
    }
    printf("The number of even numbers in last row are %d",j-1);
}
