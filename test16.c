/* To Display the first 'n' natural numbers & the sum of first n natural numbers.*/
#include<stdio.h>
void main()
{
    int num,sum = 0;
    printf("Enter any number : ");
    scanf("%d",&num);
    /*The first n natural numbers...*/
    printf("\nThe first %'%d' natural numbers are :  ",num);
    for(int i =1;i<=num;i++){
        printf("%d,",i);
    }
    /*The sum of first n natural numbers '+'*/
    for(int i =1;i<=num;i++)
    sum =sum+ i;
    {
        printf("\n\nThe sum of first %'%d' natural numbers is: %d",num,sum);
    }
    printf("\n");
}
