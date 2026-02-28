/*@To Display marks & give its Percentage,Total and Grade#*/

#include<stdio.h>
void main()
{
    char name[15];

    short marks[5],total = 0,roll_no,std,h;

    float per[5];

    //--- To Display details of the student ---

    printf("\nEnter full name of the student : %s",name);
    fgets(name,sizeof(name),stdin);

    printf("\nEnter class of the student : ");
    scanf("%hd",&std);

    printf("\nEnter Roll no of the student : ");
    scanf("%hd",&roll_no);

    //To print the percentage of marks......

    for(h=0;h<5;h++)
    {
        printf("\nEnter marks in the subject - %d : ",h+1);
        scanf("%hd",&marks[h]);
        total += marks[h];
        per[h] =  (marks[h]/100.0)*100;
    }

     //***To Display marks of all the 5 subjects subjects***

    printf("\n\nMarks and percentages in all the subjects out of '500':\n");

    for(h = 0;h<5;h++)
    {
        printf("\nsubject  %d:  Marks = %d/100,  Percentage = %.2f%%\n",h+1,marks[h],per[h]);
    }
  float  to_per = (total/500.0)*100;
    //:::: To Give grades of the percentage ::::

    if(to_per >=80)
    {
        printf("\nPercentage: %.2f%%  Grade : Excellent",to_per);
    }
    else  if(to_per >=70)
    {
        printf("\nPercentage: %.2f%% Grade : Very Good",to_per);
    }
    else  if(to_per >=60)
    {
        printf("\nPercentage: %.2f%%  Grade : Good",to_per);
    }
    else  if(to_per >=50)
    {
        printf("\nPercentage: %.2f%%  Grade : Satisfactory",to_per);
    }
    else
    {
        printf("\nPercentage: %.2f%% Grade : Fail",to_per);
    }

    /*>Promotion note<*/

    if(to_per >=50)
    {
        printf("\n\nCongrats!  %s.... \n 'You got (%d/500) marks and you are promoted to next class' i.e; %dth Class.....\n",name,total,std+1);
    }
   else
    {
        printf("\n\nSorry!  %s.... \n 'You got (%d/500) marks and you are not promoted to next class' So you will be studying in %dth Class again.....\n\n",name,total,std);
    }

}
