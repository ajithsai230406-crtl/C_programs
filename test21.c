#include<stdio.h>
void main()
{
    char str[20];
    printf("Enter the string : ");
    scanf("%[^\n]s",str);
    printf("\nThe name of the princess is : %s\n\n",str);
    return 0;
}
