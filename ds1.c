/*Stack implementation using static array*/
#include<stdio.h>
#define CAPACITY 5
int stac[CAPACITY];
int top = -1;
void push(int);
int pop(void);
int isFull(void);
int isEmpty(void);
void peek(void);
void traverse(void);
void main()
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
                            printf("Popped item is : %d\n",item);
                        }
                        break;
            case 3: peek();
                         break;
            case 4: traverse();
                         break;
            case 5: exit(0);
            default : printf("Invalid input \n\n");
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
    stac[top] = ele;
    printf("%d Pushed \n",ele);
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
        return stac[top--];
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
        printf("Peek element : %d\n",stac[top]);
    }
}
void traverse()
{
    if(isEmpty())
    {
        printf("Stack is empty\n");
    }
    else
    {
        int i;
        printf("stack elements : ");
        for(i = 0;i<=top;i++)
        {
            printf("%d, ",stac[i]);
        }
        printf("\n");
    }
}
