#include<stdio.h>
void main()
{
    short n,rev = 0,m;
    printf("Enter some number :");
    scanf("%d",&n);
    while (n != 0)
    {
        m = n%10;
        rev = rev *10 + m;
        n /=10;
}
    printf("The sum is : %d",rev);
}
