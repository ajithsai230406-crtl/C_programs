/*Implementation of queue using Linked List...*/
#include<stdio.h>
#include<stdlib.h>
void insert(int);
void delete();
void display();

struct node
{
    int data;
    struct node * next;
}*front = NULL,*rear = NULL;

void main()
{
    int value,choice;
    printf("\n:::Queue Implementation using Linked List:::\n");
    while(1)
    {
        printf("\n***MENU***\n");
        printf(" 1. Insert\n 2. Delete\n 3. Display\n 4. Exit\n");

        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter the value to be inserted : ");
                          scanf("%d",&value);
                          insert(value);
                          break;
            case 2: delete();
                          break;
            case 3: display();
                          break;
            case 4: exit(0);
            default: printf("Invalid Input!!!");
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
    {
        front = rear = newnode;
    }
    else
    {
        rear -> next = newnode;
        rear = newnode;
    }
    printf("\nInsertion is successful!!\n");
}
void delete()
{
    if(front == NULL)
    {
        printf("Queue is Empty!!\n");
    }
    else
    {
        struct node * temp = front;
        front = front -> next;
        printf("\nDeleted element : %d\n",temp->data);
        free(temp);
    }
}
void display()
{
    if(front == NULL)
    {
        printf("\nQueue is Empty!!");
    }
    else
    {
        struct node * temp = front;
        while(temp -> next != NULL)
              {
                  printf("%d--->",temp->data);
                  temp = temp -> next;
              }
              printf("%d --->NULL\n",temp ->data);
    }
}
