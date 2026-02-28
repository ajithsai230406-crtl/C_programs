#include<stdio.h>
void main()
{
    int mn,ab,cols;
    printf("Enter some number :");
    scanf("%d",&mn);
    for (mn = 1;mn<=cols;mn ++)
    {
        for(ab = 1;ab<=mn;ab++)
    {
        printf("@");
    }
    printf("\n");
}
}
