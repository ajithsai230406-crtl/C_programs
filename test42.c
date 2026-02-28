#include<stdio.h>
struct employee
{
    char name [20];
    float basic;
    float  da;
    float gross;
    e[5];
};
void main()
{
    int i;
    printf("Enter name and basic : ");
    for(i = 0;i<5;i++)
        scanf("%s%f",e[i].name,&e[i],&e[i].basic);
    for(i = 0;i<5;i++)
    {
        e[i].da = 52.0/100*e[i].basic;
        e[i].gross = e[i].da+e[i].basic;
        printf("\nName = %s, gross = %f",e[i].name,e[i],e[i].gross);

    }
}
