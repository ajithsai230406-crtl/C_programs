//Function to calculate the factorial.
#include<stdio.h>

    unsigned long long factorial(int n)
    {
        if( n == 0)
            return 1;
        else
            return n * factorial(n-1);
    }
int main(){
    int num;
    printf("Enter the number of factorials to print : ");
    scanf("%d",&num);
    for(int i = 1;i<=num;i++)
    {
        printf("Factorial of %d = %llu\n",i,factorial(i));
    }
    return 0;

}


