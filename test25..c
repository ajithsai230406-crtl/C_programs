/* : :Swaping of two numbers : : */
 #include<stdio.h>
void swap(int *x, int *y);
void main()
{
    int a = 5,b = 6;
    printf("Before swaping a and b are %d,%d",a,b);

                           swap(&a,&b);
                           printf("\nAfter swaping a and b are %d,%d",a,b);
}
 void swap(int *x,int *y)
{
           int temp;
           temp = *x;
           *x = *y;
           *y = temp;

}
