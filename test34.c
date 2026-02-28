#include<stdio.h>
void swap(int*,int*);
void main()
{
    int x,y;
    x = 20;
    y =4;
    printf("Before exchange : x = %d , y = %d\n\n",x,y);
    swap(&x,&y);
    printf("After exchange : x = %d , y = %d\n\n",x,y);
}
swap(int*a,int*b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
