//To display first 'n' odd numbers and to display sum of first 'n' odd numbers
#include<stdio.h>
void main()
{
    int n,i,sum = 0;
    printf("Enter some number : ");
    scanf("%d",&n);
    /*Displays first 'n' odd numbers*/
    printf("\nThe first %'%d' odd numbers are:",n);
   for(i = 1;i<=2*n;i+=2){
    printf("%d,",i);
    }
   /*Displays sum of first 'n' odd numbers*/
    for (i = 1;i<=n*2;i+=2){
            sum += i;
    }
    printf("\n\nThe sum of first %'%d' odd numbers is :%d\n\n",n,sum);
}


