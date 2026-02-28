#include<stdio.h>
void main()
{
    int a = 0;
    char str[20];
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    printf("\nThe heroine of the movie is : ");
    while(str[a] != '\0')
    {
        printf("\t%c\n",str[a]);
        a++;
    }

    }
