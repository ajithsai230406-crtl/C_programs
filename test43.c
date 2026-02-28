//maximum and minimum of given set of numbers
#include<stdio.h>
int main()
{
    int max,min;
    int i,n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements : \n");
    for(i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for(i = 0;i<n;i++)
    {
            if(arr[i]>max)
            {
                max = arr[i];
            }
            if(arr[i]<min)
            {
                min = arr[i];
            }
    }
    printf("\nMaximum element  = %d , Minimum element  = %d",max,min);
    return 0;
}
