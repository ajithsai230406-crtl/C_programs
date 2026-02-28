#include<stdio.h>
void main()
{//To find the greatest number among given variables
    int a,b,c;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    printf("Enter third number :");
    scanf("%d",&c);
    if (a>b && a>c)
        printf("The greatest number is :%d\n",a);
    if (b>c && b>a)
    printf("The greatest number is : %d\n",b);
    if (c>a && c>b)
        printf("The greatest nnumber is : %d\n",c);

}
