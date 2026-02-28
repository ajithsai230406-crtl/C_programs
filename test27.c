#include<stdio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
    if(argc != 3)
    {
        printf("Please provide only two values as arguments.\n ");
        return;
    }
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    printf("The sum of two numbers is %d : ",num1+num2);
}
