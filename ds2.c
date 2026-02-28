#include<stdio.h>
#define CAPACITY 5
 int stack[CAPACITY],top = -1;   //Pre -  processor Directive
 void push(int);
 int pop(void);
 int isFull(void);
 int isEmpty(void);
 void peek(void);
 void traverse(void);
 void main(void)
 {
     int ch,item;
     while(1)
     {
         printf("1. Push\n");
         printf("2. Pop\n");
         printf("3. Peek\n");
         printf("4. Traverse\n");
         printf("5. Quit\n");

          printf("Enter the choice : ");
          scanf("%d",&ch);
          switch(ch)
          {
              case 1: printf("Enter element : ");
                            scanf("%d",&item);
                            push(item);
                            break;
              case 2: item = pop();
                           if(item == 0)
                            {
                                printf("Stack is underflow\n");
                            }
                            else
                            {
                                printf("Popped element : %d\n",item);
                            }
                            break;
              case 3: peek();
                            break;
              case 4: traverse();
                            break;
              case 5: exit(0);
              default : printf("Invalid input\n");
          }
     }
 }
 void push(int ele)
 {
     if(isFull())
     {
         printf("Stack is overflow\n");
     }
     else
     {
         top++;
         stack[top] = ele;
         printf("Pushed element : %d\n",ele);
     }
 }
int isFull()
 {
     if(top == CAPACITY-1)
     {
         return 1;
     }
     else
     {
         return 0;
     }
}
int pop()
{
    if(isEmpty())
    {
        return 0;
    }
    else
    {
        return stack[top--];
        printf("Popped Element is : %d\n",stack[top]);
    }
}
int isEmpty()
{
    if(top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void peek()
{
    if(isEmpty())
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Peeked element : %d\n",stack[top]);
    }
}
void traverse()
{
    int i;
    if(isEmpty())
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements : ");
        for(i = 0;i<=top;i++)
        {
            printf("%d, ",stack[top]);
        }
        printf("\n");
    }
}
