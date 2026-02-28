#include<stdio.h>
int main()
{
    float s1,s2,s3,s4,s5,s6,s7,Total_Marks,Avg,per;
    printf("Student progress Report");
    printf("\nTotal marks in s1 : ");
    scanf("%f",&s1);
    printf("\nTotal marks in s2 : ");
    scanf("%f",&s2);
    printf("\nTotal marks in s3 : ");
    scanf("%f",&s3);
    printf("\nTotal marks in s4 : ");
    scanf("%f",&s4);
    printf("\nTotal marks in s5 : ");
    scanf("%f",&s5);
    printf("\nTotal marks in s6 : ");
    scanf("%f",&s6);
    printf("\nTotal marks in s7 : ");
    scanf("%f",&s7);
    Total_Marks = s1+s2+s3+s4+s5+s6+s7;
    Avg = Total_Marks/7;
    per = (Total_Marks/210)*100;
    printf("\nTotal marks in All subjects : %f",Total_Marks);
    printf("\nThe Average of All subjects : %f",Avg);
    printf("\nThe percentage of All subjects : %f",per);
    printf("\t%");


}
