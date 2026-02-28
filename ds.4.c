/*Stack Implementation program using arrays*/
#include<stdio.h>
#define SIZE 5
int stack[SIZE],top = -1;
void main()
{
    int ch,value;
    while(1)
    {

    printf("\n\n***MENU***");
    printf("\n\n 1.Push\n 2.Pop\n 3.Peek\n 4.Display\n 5.Exit\n");

     printf("\nEnter your choice : ");
     scanf("%d",&ch);

     switch(ch)
     {
         case 1: printf("\nEnter the value : ");
                      scanf("%d",&value);
                      push(value);
                      break;
        case 2: pop();
                     break;
        case 3: peek();
                    break;
        case 4: display();
                     break;
        case 5: exit(0);
        default: printf("Invalid input!!\n");
        }
    }
}
void push(int n)
{
    if(top == SIZE -1)
    {
        printf("\nStack is Empty!!");
    }
    else
    {
        top++;
        stack[top] = n;
        printf("\nInserted %d Successfully*",n);
    }
}
void pop()
{
    if(top == -1)
    {
        printf("\nStack is Underflow!!");
    }
    else
    {
        printf("\n Deleted %d",stack[top]);
        top--;
    }
}
void peek()
{
    if(top == -1)
    {
        printf("\nStack is Empty!");
    }
    else
    printf("\nPeek Element is %d",stack[top]);
}
void display()
{
    if(top == -1)
    {
        printf("\nStack is Empty!");
    }
    else
    {
        printf("\nStack Elements are : ");
        for(int i = top;i>=0;i--)
        {
            printf("%d, ",stack[i]);
        }
    }
}
