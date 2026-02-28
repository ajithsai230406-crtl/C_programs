//To find the length of the string .....
#include<stdio.h>
void main()
{
    int i = 0;
    char str[] = "Methodist";
    while(str[i] =! '\0')
    {
        i++;
    }
    printf("The length of the string %s is : %d",str,i);
}
