#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
}*top = NULL;

void push(int);
void pop(void);
void peek(void);
void display(void);

void main()
{
    int choice,value;

    while(1)
    {
        printf("\n:::::MENU:::::\n");
        printf("\n 1.Push\n 2.Pop\n 3.Peek\n 4.Display\n 5.Exit\n");

        printf("\nEnter the choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: printf("\nEnter the element to insert : ");
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
            default: printf("Invalid Choice!!!");
        }
    }
}
void push(int value)
{
    struct node * newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode -> data = value;
    if(top == NULL)
        newnode ->next = NULL;
    else
        newnode -> next = top;
    top = newnode;
    printf("\nInserted element %d\n",value);
}
void pop()
{
    if(top == NULL)
        printf("\nStack is Underflow!!\n");
    else
    {
        struct node * temp = top;
        printf("\nDeleted element %d\n",temp->data);
        top = temp -> next;
        free(temp);

    }
}
void peek()
{
    if(top == NULL)
       {
            printf("\nStack is Empty!\n");
       }
    else
    {
        struct node * temp = top;
        printf("Peek Element is %d",temp -> data);
    }
}
void display()
{
    if(top == NULL)
       {
           printf("\nStack is Empty!\n");
       }
    else
    {
        struct node * temp = top;
        while(temp != NULL)
              {
                  printf("%d---->",temp->data);
                  temp = temp -> next;
              }
        printf("NULL");
    }
}
