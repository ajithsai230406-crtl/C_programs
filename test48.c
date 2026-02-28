#include<stdio.h>
void sum()
{
    int a,b,sum = 0;
    printf("\n\nEnter two numbers : \n");
    scanf("%d%d",&a,&b);
    sum = a+b;
    printf("\nThe sum of two numbers is : %d",sum);
}
void main()
{
    sum();
    printf("\n Hello i am Ajith");
    sum();
    sum();
}
