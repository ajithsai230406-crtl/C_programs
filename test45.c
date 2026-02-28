/*Fibonacci of non - recursive. */
#include<stdio.h>
int main()
{
    int n,i;
    unsigned long fib1 = 0,fib2 = 1,nxtfib;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    printf("\nFibonacci series is : ");
    for(i = 1;i<=n;i++)
    {
        if(i == 1)
        {
            printf("%lu, ",fib1);
            continue;
        }
        if(i == 2)
        {
            printf("%lu, ",fib2);
            continue;
        }
        nxtfib = fib1 + fib2;
        fib1 = fib2;
        fib2 = nxtfib;
        printf("%lu, ",nxtfib);
    }
    printf("\n");
    return 0;
}
