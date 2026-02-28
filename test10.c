#include<stdio.h>
void main()
{
    int n,rev=0,m;
    printf("Enter some number : ");
    scanf("%d",&n);
    while (n>0)
    {
        m  = n%10;
        rev = rev * 10 + m;
        n = n/10;
    }
    printf("\nThe reverse of the number is %d\n",rev);
}

