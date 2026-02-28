#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
}*front = *rear = NULL;

void insert(int);
void delete(void);
void display(void);

void main()
{
    int value,choice;
    while(1)
    {
        printf("\n:::::MENU:::::\n");
        printf("\n 1.Insert\n 2.Delete\n 3. Display\n 4.Exit\n");

        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: printf("Enter the element to insert : ");
                          scanf("%d",&value);
                          insert(value);
                          break;
            case 2: delete();
                          break;
            case 3: display();
                         break;
            case 4: exit(0);
                          break;
            default: printf("\nInvalid Choice!!!\n");
        }
    }
}
void insert(int value)
{
    struct node * newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode -> data = value;
    newnode -> next = NULL;
    if(front == NULL)
        front = rear = newnode;
    else
    {
        rear -> next = newnode;
        rear = newnode;
    }
    printf("\nInserted element %d\n",value);
}
void delete()
{
    if(front == NULL)
       {
           printf("\nQueue is Underflow!!\n");
       }
    else
    {
        struct node * temp = front;
        front = front -> next;
        printf("\nDeleted element %d",temp ->data);
        free(temp);
    }
}
void display()
{
    if(front == NULL)
    {
        printf("\nQueue is Empty!\n");
    }
    else
    {
        struct node * temp = front;
        while(temp != NULL)
        {
            printf("%d---->",temp -> data);
            temp = temp -> next;
        }
        printf("NULL");
    }
}

