#include<stdio.h>
void main()
{
    int a;
    printf("Enter some Number :");
    scanf("%d",&a);
    if (a%2 == 0)
    {
        printf("%d is even number\n",a);
     exit(0);
    }
    printf("%d is odd number\n",a);
}
