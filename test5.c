#include<stdio.h>
void main()
{
    //The program is about student progress details...
    int s1,s2,s3,s4,s5,s6,rn,tm,dob;
    float avg;
    char name[10];
    printf("The details of student.....");
    printf("\n The Roll.no of the student :");
    scanf("%d",&rn);
    printf("\n The Name of the student :");
    scanf("%s",&name);
    printf("\n The Date of Birth of the student :");
    scanf("%s",&dob);
    printf("\nThe Final Marks of the student : ");
    printf("\n Marks in English is : :");
    scanf("%d",&s1);
    printf("\n Marks in Hindi is : :");
    scanf("%d",&s2);
    printf("\n Marks in Maths is : :");
    scanf("%d",&s3);
    printf("\n Marks in Science is : :");
    scanf("%d",&s4);
    printf("\n Marks in Social is : :");
    scanf("%d",&s5);
    printf("\n Marks in Telugu is : :");
    scanf("%d",&s6);
    tm = s1+s2+s3+s4+s5+s6;
    avg = tm/6;
    printf("\nThe Total Marks obtained by the student is : %d",tm);
    printf("\nThe Average Marks obtained by the student is : %f",avg);
    printf("\n@Congrats.....%s",name);
    printf("\nYou scored Good Marks :%d",tm);
}
