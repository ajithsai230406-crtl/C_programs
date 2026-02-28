#include<stdio.h>
void main()
{//@To find the profit and loss of the seller ......
    float cp,sp,p,l;
    printf("Enter cost price :");
    scanf("%f",&cp);
    printf("Enter selling price :");
    scanf("%f",&sp);
    p = sp - cp;
    l = cp - sp;
    if (p>0)
        printf("The seller made a profit of : %f$\n",p);
    if (l>0)
        printf("The seller made a loss of : %f$\n",l);
    if  (p == 0)
        printf("The seller neither made profit nor loss\n");

}
