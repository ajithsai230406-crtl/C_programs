//Fibonacci Recursive.
#include<stdio.h>
int fibonacci(int num)
{
    if(num<=1)
        return num;
    else
        return fibonacci(num - 1) + fibonacci(num - 2);
}
int main()
{
    int n;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    printf("\nFibonacci series : ");
    for(int i = 0;i<n;i++)
    {
        printf("%d, ",fibonacci(i));
    }
    printf("\n");
    return 0;
}
