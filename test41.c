#include<stdio.h>
#include<string.h>
int main()
{
    char str1[] = "Methodist";
    char str2[] = "Mcet";
    int i,j,k;

    i = strcmp(str1,"Methodist");
    j = strcmp(str1,str2);
    k = strcmp(str1,"Methodist College");

    printf("i = %d\n",i);
    printf("j = %d\n",j);
    printf("k = %d\n",k);
    getchar();
    return 0;

}
