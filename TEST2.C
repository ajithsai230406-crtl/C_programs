#include<stdio.h>
int main()
{
        int rollno,totalmarks;
        char name[10];
        float avg;
        printf(": : : :Enter student details: : : :\n");
        printf("\nEnter Rollno of student : ");
        scanf("%d",&rollno);
        printf("\nEnter Name of student : ");
        scanf("%s",&name);
        printf("\nEnter Total marks of student : ");
        scanf("%d",&totalmarks);
        avg  = (totalmarks/4.0);
        printf("\nThe details of student are : \n%d\n%s\n(%d/100)\n%f",rollno,name,totalmarks,avg);
        printf("\n");
        return 0;

}
