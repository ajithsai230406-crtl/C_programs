#include<stdio.h>
#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    printf("Enter string 1: ");
    scanf("%s",str1);
    str1[strcspn(str1,"\n")] = 0;
     printf("Enter string 2: ");
     scanf("%s",str2);
    str2[strcspn(str2,"\n")] = 0;
    int result = strcmp(str1,str2);
    if(result == 0)
    {
        printf("Strings are equal.\n");
    }
    else
    {
        printf("Strings are not equal.");
    }
    return 0;
}
