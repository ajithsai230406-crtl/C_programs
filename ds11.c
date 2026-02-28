/*Implementation of stack using Linked List*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
}*top = NULL;
void push();
void pop();
void display();

void main()
{
    int choice,value;
    printf("\n:::Stack using Linked List:::\n");
    while(1)
    {
          printf("\n***MENU***\n");
          printf(" 1.Push\n 2.Pop\n 3.Display\n 4.Exit\n");
          printf("Enter your choice : ");
          scanf("%d",&choice);
          switch(choice)
          {
              case 1: printf("\nEnter the value to be inserted : ");
                            scanf("%d",&value);
                            push(value);
                            break;
             case 2 : pop();
                            break;
             case 3: display();
                            break;
             case 4: exit(1);
             default: printf("\nInvalid Input!!!");
       }
    }
}

void push(int value)
{
    struct node * newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode -> data = value;
    if(top == NULL)
        newnode -> next = NULL;
    else
        newnode -> next = top;
    top = newnode;
    printf("\nInserted successfully!!");
}
void pop()
{
    if(top == NULL)
       {
           printf("\nStack is underflow!!");
       }
        else
        {
            struct node * temp = top;
            printf("\nDeleted element %d",temp->data);
            top = temp -> next;
            free(temp);
    }
}
void display()
{
    if(top == NULL)
       {
           printf("\nStack is Empty!");
       }
       else
        {
            struct node * temp = top;
            while(temp -> next != NULL)
            {
                printf("%d--->",temp -> data);
                temp = temp -> next;
            }
            printf("%d--->NULL",temp->data);
        }
}
