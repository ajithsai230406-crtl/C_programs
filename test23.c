//Write a program to print prime numbers b/w 1 to n and it's sum......
#include<stdio.h>
#include<stdbool.h>
void main()
{
    int num,sum = 0,prime_count = 0,o,y;
    bool isprime;
    printf("Enter the  number of prime numbers : ");
    scanf("%d",&num);
    printf("\nThe prime numbers b/w 1 to %d are :  ",num);
    for(o = 2;o<=num;o++)
    {
        isprime = true;
        for(y = 2;y<=o/2;y++)
        {
            if(o%y == 0){
                isprime = false;
                break;
            }
        }
        if(isprime){
            printf("%d, ",o);
            sum += o;
            prime_count++;
        }
    }
    printf("\n");
    printf("The no.of prime no's are : %d",prime_count);
    printf("\nThe sum of prime numbers b/w 1 to %d is : %d\n", num, sum);

}
