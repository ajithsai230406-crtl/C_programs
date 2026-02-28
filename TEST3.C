#include<stdio.h>
int main()
{
    long unsigned a[10] = {4,29,49,67,295,456};
    printf("The value are : ");
    for (int i = 0;i<=5;i++)
    {
        printf("%lu, ",a[i]);    //Use %lu to initialize long unsigned
    }
    printf("\n");
    return 0;
}
