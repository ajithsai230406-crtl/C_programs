#include<stdio.h>
void main()
{
    int x [3] [3], y [3] [3], z [3] [3] ,i , j;
    printf("Enter elements of array X : \n");
    for(i = 0 ; i<3 ; i++)
    {
        for(j = 0 ; j<3 ;j++)
        {
            printf("Element X[%d] [%d] :",i,j);
            scanf("%d",&x[i][j]);
        }
    }
    printf("Enter elements of array Y : \n");
    for(i = 0 ; i<3 ; i++)
    {
        for(j = 0 ; j<3 ; j++)
        {
            printf("Element Y[%d] [%d] :",i,j);
            scanf("%d",&y [i] [j] );
        }
    }
    for(i = 0 ; i<3 ; i++)
    {
        for(j = 0 ; j<3 ; j++)
        {
               z[i] [j] = x[i] [j] + y[i] [j];
        }
    }
    printf("The elements of array Z are : \n\n");
    for(i  = 0 ; i<3 ; i++)
    {
        for(j = 0 ; j<3 ; j++)
        {
            printf("\t%d",z [i] [j] );
        }
        printf("\n\n");
    }























    }
