#include<stdio.h>
void main()
{
    int st,ut,lows;
    printf("Enter some number :");
    scanf("%d",&lows);
    for(st = 1;st<=lows;st++)
    {
        for(ut = lows;ut>=st;ut--)
    {
        printf("*");
    }
    printf("\n");
}
}
